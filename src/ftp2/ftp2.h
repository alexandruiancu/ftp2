#ifndef __FTP2_H__
#define __FTP2_H__

#include "frames.h"

int ftp2_auth_user(const FramesList &in, FramesList &out);
int ftp2_send_file(const FramesList &in, FramesList &out);

#endif // __FTP2_H__
