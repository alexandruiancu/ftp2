#ifndef __PACKET_H__
#define __PACKET_H__

#include <stdint.h>
#include <list>

//TODO andu: include nghttp header and use their defines
struct FrameHeader
{
  uint32_t    length;
  uint32_t    stream_id;
  uint8_t     type;
  uint32_t    flags;
};

struct FTP2Frame
{
  FrameHeader m_hdr;
};

struct FTPControlFrame : public FTP2Frame
{
  char       *m_pCommandsAndReplies;
};

struct FTPDataFrame : public FTP2Frame
{
  int8_t      m_nPadLength;
  char       *m_pData;
  char       *m_pPadding;
};

typedef std::list<FTP2Frame *> FramesList;

#endif // __PACKET_H__
