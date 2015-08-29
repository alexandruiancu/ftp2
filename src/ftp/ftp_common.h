#ifndef FTP_COMMON_H
#define FTP_COMMON_H

#include <string>
#define PARSER_STR_LEN 512

struct FtpHost
{
  int h1, h2, h3, h4;
  int p1, p2;
};

void setFtpHost (FtpHost &out, const FtpHost &in);
void setFtpHost (FtpHost &out, const char *szIn);
void getIpAddr (const FtpHost &host, char *pOut, const int &nBuffSize);
int getPortNo (const FtpHost &host);
std::string getPortNo (unsigned int nport);
std::string getHost (const FtpHost &host);

#endif //__FTP_COMMON_H__
