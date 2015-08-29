/* -*- mode: c++ -*- */
/*
  MyServer
  Copyright (C) 2008, 2009 Free Software Foundation, Inc.
  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef FTP_H
#define FTP_H
#include "ftp_common.h"

class Ftp;
class FtpData;

#include "ftp_parser.h"
#include "ftp_lexer.h"

class StreamState
{
public:
  enum Representation
    {
      REPR_ASCII,
      REPR_IMAGE
    } m_nRepresentation;
  enum FormatControl
    {
      NON_PRINT
    } m_nFormatControl;
  enum FileStructure
    {
      STRU_FILE
    } m_nFileStructure;
  enum TransferMode
    {
      MODE_STREAM
    } m_nTransferMode;
  std::string m_sRenameFrom;
  // STAT data
  std::string m_sCurrentFileName;
  u_long m_nFileSize, m_nBytesSent;
};

class ConnectionState
{
public:
  ConnectionState();
  ~ConnectionState();

  enum State
    {
      NO_CONTROL_CONNECTION,
      BUISY,
      UNAVAILABLE,
      CONTROL_CONNECTION_UP,
      USER_LOGGED_IN,
      DATA_CONNECTION_UP
    } m_nState;

  std::string m_sUserName, m_sPass;
  //Mutex m_DataConnBusy;
  FtpHost m_cdh;
  std::string m_cwd;
  int m_nLocalDataport;
  bool m_bBreakDataConnection;
  bool m_bPassiveSrv;
  u_long m_nRestartOffset;
  std::string m_sRenameFrom;

  YY_BUFFER_STATE m_scannerState;
  //TODO:
  //list<tree> m_streams;
};

class Connection
{
public:
  //TODO:
  // stream tree operations here
 
  int m_nLocalControlPort;
  int m_nPassivePort;
};

//TODO: move to server
extern yyscan_t glbl_scanner;

class Ftp
{
public:
  Ftp ();
  virtual ~ Ftp ();

  int parseControlConnection ();
  u_long computeParseLength (const YYLTYPE & location);

  void ftpReply (int nReplyCode, const std::string & sCustomText = "");

  int printError (const char *msg);
  int closeDataConnection ();

  // move into server or protect them by mutex
  //static int FIRST_PASV_PORT;
  //static int LAST_PASV_PORT;

  int checkRights (const std::string & suser, const std::string & sPass,
                   const std::string & sPath, int mask);
  void waitDataConnection ();

  int OpenDataConnection ();
  int openDataPassive ();
  int openDataActive ();

  void escapeTelnet (const std::string &sIn, std::string &sOut);
  void user (const std::string & sParam);
  void password (const std::string & sParam);
  void port (const FtpHost & host);
  void pasv ();
  int type (int ntypeCode, int nFormatControlCode = -1);
  void retr (const std::string & sPath);
  void quit ();
  void help (const std::string & sCmd = "");
  void noop ();
  void stru (int nstructure);
  void mode (int nmode);
  void list (const std::string & sParam = "");
  void nlst (const std::string & sParam = "");
  void abor ();
  void cwd (const std::string & sPath);
  void pwd ();
  void rest (const std::string & srestPoint);
  void syst ();
  void statCmd (const std::string & sParam = "");
  void allo (int nSize, int nRecordSize = -1);

  void stor (const std::string & sPath);
  void stou (const std::string & sPath);
  void dele (const std::string & sPath);
  void appe (const std::string & sPath);
  void mkd (const std::string & sPath);
  void rmd (const std::string & sPath);
  void rnfr (const std::string & sPath);
  void rnto (const std::string & sPath);

  /* RFC 3659 commands */
  void size (const std::string & sPath);

  int SetProtocolData(FtpData *pProtocolData = nullptr){ return 0; }//TODO: implement
protected:
  bool userLoggedIn ();
  bool buildLocalPath (const std::string & sPath, std::string & sOutPath);
  bool getLocalPath (const std::string & sPath, std::string & sOutPath);
  void retrstor (bool bretr, bool bappend, const std::string & sPath);
  void removePipelinedCmds (const std::string &sIn, std::string &sOut);

  // move to server
  //static bool m_ballowAnonymous, m_bAnonymousNeedPass,
  //  m_ballowAsynchronousCmds, m_bEnablePipelining, m_bEnablestoreCmds;
};

int getFtpReply (int nReplyCode, std::string & sReply);
/*TODO re-implement if needed
void ftpReply (ConnectionPtr pConnection, int nReplyCode,
               const std::string & sCustomText = "");
*/
void yyerror (YYLTYPE * pLoc, Ftp * pContext, const char *msg);

#endif // FTP_H
