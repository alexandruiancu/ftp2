#include "ftp_common.h"

void setFtpHost (FtpHost & out, const FtpHost & in)
{
  out.h1 = in.h1;
  out.h2 = in.h2;
  out.h3 = in.h3;
  out.h4 = in.h4;
  out.p1 = in.p1;
  out.p2 = in.p2;
}

void setFtpHost (FtpHost & out, const char *szIn)
{
  std::stringstream ss;
  char *szLocalIn = strdup (szIn);
  char *tok = strtok (szLocalIn, ",.");
  while (tok != NULL)
    {
      ss << tok << " ";
      tok = strtok (NULL, ",.");
    }
  ss >> out.h1 >> out.h2 >> out.h3 >> out.h4 >> out.p1 >> out.p2;
  free (szLocalIn);
}

void getIpAddr (const FtpHost & host, char *pOut, const int &nBuffSize)
{
  if (pOut == NULL)
    return;
  std::ostringstream sRet;
  sRet << host.h1 << '.' << host.h2 << '.' << host.h3 << '.' << host.h4;
  memset (pOut, 0, nBuffSize);
  strncpy (pOut, sRet.str ().c_str (), nBuffSize - 1);
}

int getPortNo (const FtpHost & host)
{
  return ((host.p1 << 8) + host.p2);
}

std::string getPortNo (unsigned int nport)
{
  unsigned int hiByte = (nport & 0x0000ff00) >> 8;
  unsigned int loByte = nport & 0x000000ff;
  std::ostringstream out;
  out << hiByte << "," << loByte;
  return out.str ();
}

std::string getHost (const FtpHost & host)
{
  std::ostringstream s;
  s << host.h1 << ',' << host.h2 << ',' << host.h3 << ',' << host.
    h4 << ',' << host.p1 << ',' << host.p2;
  return s.str ().c_str ();
}

