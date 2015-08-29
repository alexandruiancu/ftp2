#ifndef __SERVER_H__
#define __SERVER_H__

#include <queue>
#include <pthread.h>
#include <semaphore.h>

class Server;
struct pthread_param
{
  Server *m_pServer;
  void   *m_pOtherData;
};

class Server
{
 public:
  Server();
  ~Server();
 protected:
  struct socketListener
  {
    int m_nFD;
  };
  friend void *workerListener(void *pParam);
  friend void *workerFTP(void *pParam);

  void pushWorker(int fd);
  void popWorker();
  std::queue<pthread_t> m_q_workerThreads;
  sem_t m_qs;
};

#endif // __SERVER_H__
