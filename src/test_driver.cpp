#include <stdio.h>
#include "ftp2.h"
#include "ftp.h"

int userLogIn(FramesList &out);

int main(int argc, char *argv[])
{
  FramesList in, out;
  if ( userLogIn(in) )
    return 1;
  return ftp2_auth_user(in, out);
}

int userLogIn(FramesList &out)
{
  FTPControlFrame *pf = new FTPControlFrame();
  pf->m_hdr = { 0 };
  pf->m_pCommandsAndReplies = new char[100];
  strcpy(pf->m_pCommandsAndReplies, "USER andu\r\nPASS 1234\r\n");
  out.push_back(pf);
  pf = new FTPControlFrame();
  pf->m_hdr = { 0 };
  pf->m_pCommandsAndReplies = new char[100];
  strcpy(pf->m_pCommandsAndReplies, "PASS 1234\r\n");
  out.push_back(pf);
  // ...
  for ( FramesList::iterator it = out.begin(); it != out.end(); ++it )
  {
    FTPControlFrame *pfcf = *it;
    if ( nullptr == pfcf )
	continue;
    delete [] pfcf->m_pCommandsAndReplies;
    delete pfcf;
  }
  return 0;
}










