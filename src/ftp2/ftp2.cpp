#include "ftp2.h"
#include "ftp.h"
#include "ftpdata.h"

int ftp2_auth_user(const FramesList &in, FramesList &out)
{
  Ftp protocol;
  FtpData protocolData;
  protocol.SetProtocolData(&protocolData);
  yyscan_t scanner;
  yylex_init(&scanner);
  int nParserRet = 0;
  for ( FramesList::const_iterator it = in.begin();
	0 == nParserRet && it != in.end(); it++ )
    {
      FTP2Frame *pCF = *it;
      yy_buffer_state *bufstate = yy_scan_string (((FTPControlFrame *)pCF)->m_pCommandsAndReplies, scanner);
      nParserRet = yyparse(&protocol);
      yy_delete_buffer(bufstate, scanner);
      if ( strlen(protocolData.m_pData) > 0 )
	{
	  FTPControlFrame *pcf = new FTPControlFrame();
	  pcf->m_hdr.type = 1;
	  strcpy(pcf->m_pCommandsAndReplies, protocolData.m_pData);
	  out.push_back(pcf);
	}
      protocolData.m_pData = nullptr;
    }
  yylex_destroy(scanner);
  protocol.SetProtocolData();

  return 0;
  
}

int ftp2_send_file(const FramesList &in, FramesList &out)
{
  //TODO: implement
  return 0;
}



