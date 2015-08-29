#include "server.h"
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <iostream>
#include <unistd.h>

void *workerListener(void *pParam);
void *workerFTP(void *pParam);

Server::Server()
{
  sem_init(&m_qs, 0, 10);
  struct addrinfo hints = {
    AF_UNSPEC,
    SOCK_STREAM,
    AI_PASSIVE,
  }, *pReturnList = nullptr, *pCrtAddr = nullptr;
  int nGAI = getaddrinfo("localhost", "ftp", &hints, &pReturnList);
  if ( 0 != nGAI )
    return;
  socketListener sl = {0};
  pthread_param param;
  param.m_pServer = this;
  param.m_pOtherData = reinterpret_cast<void *>(&sl);
  void *pRet = NULL;
  for ( pCrtAddr = pReturnList; pCrtAddr != nullptr; pCrtAddr++ )
    {
      sl.m_nFD = socket(pCrtAddr->ai_family,
			pCrtAddr->ai_socktype,
			pCrtAddr->ai_protocol);
      if ( -1 == sl.m_nFD )
	continue;
      if ( 0 == bind(sl.m_nFD, pCrtAddr->ai_addr, pCrtAddr->ai_addrlen) )
	break;
      close(sl.m_nFD);
    }
  pthread_t hListener = 0;
  if ( 0 == pthread_create(&hListener, nullptr, &workerListener, &param) )
    {
      char chCrt = 0;
      while ( 'h' != chCrt )
	std::cin >> chCrt;
      std::cout << "terminating ..." << std::endl;
      pthread_join(hListener, &pRet);
    }

  for ( int i = 0; i < 10; i++ )
    {
      pthread_join(m_q_workerThreads.front(), &pRet);
      m_q_workerThreads.pop();
    }
  freeaddrinfo(pReturnList);
}

Server::~Server()
{
}

void *workerListener(void *pParam)
{
  if ( nullptr == pParam )
    return nullptr;
  pthread_param *pTP = reinterpret_cast<pthread_param *>(pParam);
  Server::socketListener *pSL = reinterpret_cast<Server::socketListener *>(pTP->m_pOtherData);
  Server *pSrv = reinterpret_cast<Server *>(pTP->m_pServer);
  while ( true/*!bStopServer*/ )
    {
      socklen_t addrlen = 0;
      struct sockaddr_storage peer = {0};
      int nNewSock = accept(pSL->m_nFD, (struct sockaddr *)&peer, &addrlen);
      if ( -1 == nNewSock )
	continue;
      pSrv->pushWorker(nNewSock);
    }
  close(pSL->m_nFD);
  return nullptr;
}

void *workerFTP(void *pParam)
{
  return nullptr;
}

void Server::pushWorker(int fd)
{
  if ( 0 != sem_wait(&m_qs) )
    return;
  pthread_t hT = 0;
  if ( 0 != pthread_create(&hT, nullptr, &workerFTP, nullptr) )
    {
      sem_post(&m_qs);
      return;
    }
  m_q_workerThreads.push(hT);
}

void Server::popWorker()
{
  if ( 0 == m_q_workerThreads.size() )
    return;
  m_q_workerThreads.pop();
  if ( 0 != sem_post(&m_qs) )
    return;
}




