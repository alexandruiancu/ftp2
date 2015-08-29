#include "ftp.h"

//TODO: move to server
yyscan_t glbl_scanner;

Ftp::Ftp()
{
}

Ftp::~Ftp()
{
}

void Ftp::ftpReply (int nReplyCode, const std::string & sCustomText/* = ""*/)
{
}

int Ftp::printError (const char *msg)
{
  //TODO: implement
  return 0;
}

int Ftp::closeDataConnection ()
{
  //TODO: implement
  return 0;
}

int Ftp::checkRights (const std::string & suser, const std::string & sPass,
                   const std::string & sPath, int mask)
{
  //TODO: implement
  return 0;
}

void Ftp::waitDataConnection ()
{
  //TODO: implement
}

int Ftp::OpenDataConnection ()
{
  //TODO: implement
  return 0;
}

int Ftp::openDataPassive ()
{
  //TODO: implement
  return 0;
}

int Ftp::openDataActive ()
{
  //TODO: implement
  return 0;
}

/*!
 *Handle telnet commands:
 * DOx      -> WONT
 * DONTx    -> ignore
 * WILLx    -> DONT
 * WONTx    -> ignore
 * IACx     -> ignore
 * IACIAC   -> IAC
 *\param In client's requests
 *\param Out client's requests without telnet codes
 */
void Ftp::escapeTelnet (const std::string &sIn, std::string &sOut)
{
  sOut.clear();

  if (sIn.length () == 0)
    return;

  const char *pIn = sIn.data(), *pCrt = sIn.data();
  char szReply[3];

  while ((u_int) (pIn - pCrt) < sIn.length ())
    {
      if (*pIn == '\377')
        {
          szReply[0] = *pIn++;
          if (*pIn == '\0')
            break;
          switch (*pIn)
            {
            case '\375':
            case '\376':
              szReply[1] = '\374';
              pIn++;
              break;
            case '\373':
            case '\374':
              szReply[1] = '\376';
              pIn++;
              break;
            case '\377':
              szReply[1] = '\0';
              sOut += *pIn;
              break;
            default:
              pIn++;
              continue;
            }
          szReply[2] = *pIn++;
          ftpReply (-1, szReply);
          continue;
        }
      sOut += *pIn++;
    }
  sOut += '\0';
}

void Ftp::user (const std::string & sParam)
{
  /*TODO: re-implement
  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);

  if (!m_ballowAnonymous
      && strcmpi (pFtpuserData->m_suserName.c_str (), "anonymous") == 0)
    {
      ftpReply (530);
      return;
    }

  pFtpuserData->m_suserName = sParam;
  */
  ftpReply (331);
}

void Ftp::password (const std::string & sParam)
{
  /*TODO re-implement
  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);

  if (!m_ballowAnonymous
      && strcmpi (pFtpuserData->m_suserName.c_str (), "anonymous") == 0)
    {
      ftpReply (530);
      return;
    }

  pFtpuserData->m_sPass = sParam;
  pFtpuserData->m_nFtpstate = FtpuserData::USER_LOGGED_IN;
  */
  ftpReply (230);
}

void Ftp::port (const FtpHost & host)
{
  /*TODO: re-implement
  waitDataConnection ();

  if (!userLoggedIn ())
    return;
  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);

  setFtpHost (pFtpuserData->m_cdh, host);
  */
  ftpReply (200);
}

void Ftp::pasv ()
{
  /*TODO: re-implement
  waitDataConnection ();
  if (!userLoggedIn ())
    return;

  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);

  std::string sHost = td.pConnection->getLocalIpAddr ();
  if (m_nPassiveport < Ftp::LAST_PASV_PORT)
    sHost += "," + getPortNo (m_nPassiveport++);
  else
    {
      m_nPassiveport = Ftp::FIRST_PASV_PORT;
      sHost += "," + getPortNo (m_nPassiveport++);
    }
  setFtpHost (pFtpuserData->m_cdh, sHost.c_str ());

  pFtpuserData->m_bPassiveSrv = true;
  if (OpenDataConnection () == 0)
    {
      /* RFC959 command replay exception.  * /
      ftpReply (425);
      return;
    }

  std::string sTempText;
  getFtpReply (227, sTempText);
  std::string::size_type n = sTempText.find ("%s");
  if (n != std::string::npos)
#ifdef WIN32
    sTempText.replace (n, 2, getHost (pFtpuserData->m_cdh));
#else
  sTempText.replace (n, 2, getHost (pFtpuserData->m_cdh));
#endif
  ftpReply (227, sTempText);

  int timeoutvalue = 3;
#ifdef __linux__
  timeoutvalue = 1;
#endif
#ifdef __HURD__
  timeoutvalue = 5;
#endif
  MYSERVER_SOCKADDRIN asockIn;
  socklen_t asockInLen = 0;
  Socket *asock;
  if (pFtpuserData->m_pDataConnection->socket->dataOnRead (timeoutvalue, 0)
      == 1)
    {
      asockInLen = sizeof (sockaddr_in);
      asock = pFtpuserData->m_pDataConnection->socket->accept (&asockIn,
                                                               &asockInLen);
      if (asock->getHandle () == (Handle) INVALID_SOCKET)
        return;

      pFtpuserData->m_pDataConnection->socket->shutdown (SD_BOTH);
      pFtpuserData->m_pDataConnection->socket->close ();
      delete pFtpuserData->m_pDataConnection->socket;
      pFtpuserData->m_pDataConnection->socket = asock;
    }

  pFtpuserData->m_bPassiveSrv = false;
   */
}

int Ftp::type (int ntypeCode, int nFormatControlCode/* = -1*/)
{
  /*TODO: re-implement
  waitDataConnection ();
  if (!userLoggedIn ())
    return 0;

  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);
  pFtpuserData->m_nFtpRepresentation =
    (FtpuserData::FtpRepresentation) ntypeCode;
  switch (nFormatControlCode)
    {
    case FtpuserData::NON_PRINT:
      if (ntypeCode == FtpuserData::REPR_ASCII)
        pFtpuserData->m_nFtpFormatControl =
          (FtpuserData::FtpFormatControl) nFormatControlCode;
      else
        {
          ftpReply (501);
          return 0;
        }
      break;

    case FtpuserData::REPR_IMAGE:
      pFtpuserData->m_nFtpFormatControl =
        (FtpuserData::FtpFormatControl) nFormatControlCode;
      break;
    }
   */

  ftpReply (200);
  return 1;
}

void Ftp::retr (const std::string & sPath)
{
  retrstor (true, false, sPath);
}

void Ftp::quit ()
{
  /*TODO: re-implement
  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);

  if (!m_ballowAsynchronousCmds)
    waitDataConnection ();

  pFtpuserData->m_nFtpstate = FtpuserData::NO_CONTROL_CONNECTION;
  */
  ftpReply (221);
}

void Ftp::help (const std::string & sCmd/* = ""*/)
{
  //TODO: re-implement
  //waitDataConnection ();
  if (sCmd.empty () || strcasecmp (sCmd.c_str(), "SITE") == 0)
    ftpReply (214);
  else
    ftpReply (502);
}

void Ftp::noop ()
{
  //TODO: re-implement
  //waitDataConnection ();
  ftpReply (200);
}

void Ftp::stru (int nstructure)
{
  /*TODO:re-implement
  waitDataConnection ();
  if (!userLoggedIn ())
    return;
  if (nstructure < 0)
    ftpReply (504);

  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);
  pFtpuserData->m_nFtpFilestructure =
    (FtpuserData::FtpFilestructure) nstructure;
  */
  ftpReply (200);
}

void Ftp::mode (int nmode)
{
  /*TODO:re-implement
  waitDataConnection ();
  if (!userLoggedIn ())
    return;
  if (nmode < 0)
    ftpReply (504);

  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);
  pFtpuserData->m_nTransfermode = (FtpuserData::FtpTransfermode) nmode;
  */
}

void Ftp::list (const std::string & sParam/* = ""*/)
{
  /*TODO:re-implement
    FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);
  waitDataConnection ();

  std::string sLocalPath;
  if (!userLoggedIn () || !getLocalPath (sParam, sLocalPath))
    return;

  if (pFtpuserData->m_nFtpstate == FtpuserData::DATA_CONNECTION_UP)
    ftpReply (125);
  else
    {
      ftpReply (150);
      if (OpenDataConnection () == 0)
        {
          ftpReply (425);
          return;
        }
    }

  std::string sPath (sLocalPath);
  if (sPath.empty ())
    sPath = pFtpuserData->m_cwd;

  const char *username = pFtpuserData->m_suserName.c_str ();
  const char *password = pFtpuserData->m_sPass.c_str ();

  if (checkRights (username, password, sLocalPath,
                   MYSERVER_PERMISSION_BROWSE) == 0)
    {
      ftpReply (530);
      return;
    }

  time_t now;
  time (&now);

  MemBuf & auxiliaryBuffer = *td.auxiliaryBuffer;
  auxiliaryBuffer.setLength (0);

  char perm[11];
  if (FilesUtility::isDirectory (sPath))
    {
      ReadDirectory fd;

      if (fd.findfirst (sPath))
        {
          ftpReply (450);
          closeDataConnection ();
          return;
        }

      const char *secName = td.st.getData ("security.filename",
                                           MYSERVER_VHOST_CONF |
                                           MYSERVER_SERVER_CONF,
                                           ".security.xml");
      do
        {
          if (fd.name[0] == '.' || !strcmpi (fd.name.c_str (), secName))
            continue;

          perm[10] = '\0';
          perm[0] = fd.attrib == FILE_ATTRIBUTE_DIRECTORY ? 'd' : '-';
          string completeFileName (sPath);
          completeFileName.append (fd.name);
          int guestMask = checkRights ("Guest", "", completeFileName, -1);
          int pMask = checkRights (username, password, completeFileName, -1);

          perm[1] = perm[4] = pMask & MYSERVER_PERMISSION_READ ? 'r' : '-';
          perm[2] = perm[5] = pMask & MYSERVER_PERMISSION_WRITE ? 'w' : '-';
          perm[3] = perm[6] = pMask & MYSERVER_PERMISSION_EXECUTE ? 'x' : '-';

          perm[7] = guestMask & MYSERVER_PERMISSION_READ ? 'r' : '-';
          perm[8] = guestMask & MYSERVER_PERMISSION_WRITE ? 'w' : '-';
          perm[9] = guestMask & MYSERVER_PERMISSION_EXECUTE ? 'x' : '-';

          string date;
          const char *datePtr = getRFC822LocalTime (fd.time_write, date, 32);

          char dateFtpFormat[13];

          dateFtpFormat[3] = ' ';
          dateFtpFormat[6] = ' ';
          dateFtpFormat[7] = ' ';
          dateFtpFormat[12] = '\0';

          int offset = datePtr[6] == ' ' ? 0 : 1;

          dateFtpFormat[4] = datePtr[5];
          dateFtpFormat[5] = datePtr[6];

          dateFtpFormat[0] = datePtr[7 + offset];
          dateFtpFormat[1] = datePtr[8 + offset];
          dateFtpFormat[2] = datePtr[9 + offset];

          /* If the file was modified in the last 6 months
           * show the hour instead of the year.  * /
          if (now - fd.time_write < 60 * 60 * 183 && now > fd.time_write)
            {
              dateFtpFormat[7] = datePtr[16 + offset];
              dateFtpFormat[8] = datePtr[17 + offset];
              dateFtpFormat[9] = ':';
              dateFtpFormat[10] = datePtr[19 + offset];
              dateFtpFormat[11] = datePtr[20 + offset];
            }
          else
            {
              dateFtpFormat[8] = datePtr[11 + offset];
              dateFtpFormat[9] = datePtr[12 + offset];
              dateFtpFormat[10] = datePtr[13 + offset];
              dateFtpFormat[11] = datePtr[14 + offset];
            }

          char nlinkStr[12];
          sprintf (nlinkStr, "%lu", fd.st_nlink);

          char fdSizeStr[12];
          sprintf (fdSizeStr, "%li", fd.size);

          auxiliaryBuffer << (const char *) perm << " " << nlinkStr << " "
                          << username << " " << username << " " << fdSizeStr
                          << " " << (const char *) dateFtpFormat << " "
                          << fd.name << "\r\n";

        }
      while (!fd.findnext ());
      fd.findclose ();
    }
  else if (!FilesUtility::isLink (sPath))
    {
      /* TODO: implement * selection.  * /
      std::string sDir, sFileName;
      FilesUtility::splitPath (sLocalPath, sDir, sFileName);
      ReadDirectory fd;
      if (fd.findfirst (sDir))
        {
          ftpReply (450);
          closeDataConnection ();
          return;
        }
      do
        {
          if (strcmp (fd.name.c_str (), sFileName.c_str ()) != 0)
            continue;

          perm[10] = '\0';
          perm[0] = fd.attrib == FILE_ATTRIBUTE_DIRECTORY ? 'd' : '-';

          string completeFileName (sDir);
          completeFileName.append (fd.name);

          int guestMask = checkRights ("guest", "", completeFileName, -1);
          int pMask = checkRights (username, password, completeFileName, -1);

          perm[1] = perm[4] = pMask & MYSERVER_PERMISSION_READ ? 'r' : '-';
          perm[2] = perm[5] = pMask & MYSERVER_PERMISSION_WRITE ? 'w' : '-';
          perm[3] = perm[6] = pMask & MYSERVER_PERMISSION_EXECUTE ? 'x' : '-';

          perm[7] = guestMask & MYSERVER_PERMISSION_READ ? 'r' : '-';
          perm[8] = guestMask & MYSERVER_PERMISSION_WRITE ? 'w' : '-';
          perm[9] = guestMask & MYSERVER_PERMISSION_EXECUTE ? 'x' : '-';

          string date;
          const char *datePtr = getRFC822LocalTime (fd.time_write, date, 32);

          char dateFtpFormat[13];

          dateFtpFormat[3] = ' ';
          dateFtpFormat[6] = ' ';
          dateFtpFormat[7] = ' ';
          dateFtpFormat[12] = '\0';

          int offset = datePtr[6] == ' ' ? 0 : 1;

          dateFtpFormat[4] = datePtr[5];
          dateFtpFormat[5] = datePtr[6];

          dateFtpFormat[0] = datePtr[7 + offset];
          dateFtpFormat[1] = datePtr[8 + offset];
          dateFtpFormat[2] = datePtr[9 + offset];

          /* If the file was modified in the last 6 months
           * show the hour instead of the year.  * /
          if (now - fd.time_write < 60 * 60 * 183 && now > fd.time_write)
            {
              dateFtpFormat[7] = datePtr[16 + offset];
              dateFtpFormat[8] = datePtr[17 + offset];
              dateFtpFormat[9] = ':';
              dateFtpFormat[10] = datePtr[19 + offset];
              dateFtpFormat[11] = datePtr[20 + offset];
            }
          else
            {
              dateFtpFormat[8] = datePtr[11 + offset];
              dateFtpFormat[9] = datePtr[12 + offset];
              dateFtpFormat[10] = datePtr[13 + offset];
              dateFtpFormat[11] = datePtr[14 + offset];
            }

          char nlinkStr[12];
          sprintf (nlinkStr, "%lu", fd.st_nlink);

          char fdSizeStr[12];
          sprintf (fdSizeStr, "%li", fd.size);

          auxiliaryBuffer << (const char *) perm << " " << nlinkStr << " "
                          << username << " " << username << " " << fdSizeStr
                          << " " << (const char *) dateFtpFormat << " "
                          << fd.name << "\r\n";
        }
      while (!fd.findnext ());
      fd.findclose ();
    }

  if (pFtpuserData->m_pDataConnection->socket->
      send (td.auxiliaryBuffer->getBuffer (),
            (u_long) td.auxiliaryBuffer->getLength (), 0) == SOCKET_ERROR)
    {
      ftpReply (451);
    }

  ftpReply (226);
  closeDataConnection ();
  */
}

void Ftp::nlst (const std::string & sParam/* = ""*/)
{
  /*TODO:re-implement
  waitDataConnection ();
  std::string sLocalPath;
  if (!userLoggedIn () || !getLocalPath (sParam, sLocalPath))
    return;

  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);

  if (pFtpuserData->m_nFtpstate == FtpuserData::DATA_CONNECTION_UP)
    ftpReply (125);
  else
    {
      ftpReply (150);
      if (OpenDataConnection () == 0)
        {
          ftpReply (425);
          return;
        }
    }

  std::string sPath (sLocalPath);
  if (sPath.empty ())
    sPath = pFtpuserData->m_cwd;

  if (!FilesUtility::isDirectory (sPath))
    {
      ftpReply (450);
      closeDataConnection ();
      return;
    }
  ReadDirectory fd;
  if (fd.findfirst (sPath))
    {
      ftpReply (450);
      closeDataConnection ();
      return;
    }

  MemBuf & auxiliaryBuffer = *td.auxiliaryBuffer;
  auxiliaryBuffer.setLength (0);

  const char *secName = td.st.getData ("security.filename",
                                       MYSERVER_VHOST_CONF |
                                       MYSERVER_SERVER_CONF,
                                       ".security.xml");
  do
    {
      if (fd.name[0] == '.' || !strcmpi (fd.name.c_str (), secName))
        continue;

      if (!sParam.empty ())
        auxiliaryBuffer << sParam << "/";
      auxiliaryBuffer << fd.name << "\r\n";
    }
  while (!fd.findnext ());
  fd.findclose ();

  if (pFtpuserData->m_pDataConnection->socket->
      send (td.auxiliaryBuffer->getBuffer (),
            (u_long) td.auxiliaryBuffer->getLength (), 0) == SOCKET_ERROR)
    {
      ftpReply (451);
    }
  ftpReply (226);
  closeDataConnection ();
  */
}

void Ftp::abor ()
{
  /*
  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);

  if (!m_ballowAsynchronousCmds)
    waitDataConnection ();

  if (pFtpuserData->m_nFtpstate == FtpuserData::DATA_CONNECTION_UP)
    {
      pFtpuserData->m_bBreakDataConnection = true;
      Thread::join (pFtpuserData->m_dataThreadId);
      ftpReply (426);
    }
  else
    ftpReply (226);
  pFtpuserData->m_bBreakDataConnection = false;
  */
}

void Ftp::cwd (const std::string & sPath)
{
  /*TODO:re-implement
  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);

  waitDataConnection ();
  if (!userLoggedIn ())
    return;

  std::string sLocalPath;
  if (!getLocalPath (sPath, sLocalPath))
    return;
  if (!FilesUtility::isDirectory (sLocalPath))
    {
      ftpReply (550);
      return;
    }

  if (sPath[0] == '/')
    pFtpuserData->m_cwd.assign ("");

  if (sPath.size () == 2 && sPath[0] == '.' && sPath[1] == '.')
    {
      size_t ind = pFtpuserData->m_cwd.find_last_of ('/');
      if (ind != string::npos)
        pFtpuserData->m_cwd.erase (ind + 1);
    }
  else if (sPath.size () != 1 || sPath[0] != '.')
    {
      if (pFtpuserData->m_cwd.size () &&
          pFtpuserData->m_cwd[pFtpuserData->m_cwd.size () - 1] != '/')
        pFtpuserData->m_cwd += "/";
      pFtpuserData->m_cwd += sPath;
    }
  */
  ftpReply (250);
}

void Ftp::pwd ()
{
  /*TODO:re-implement

  waitDataConnection ();
  if (!userLoggedIn ())
    return;
  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);

  std::string sCurrentPath = "\"";
  sCurrentPath += pFtpuserData->m_cwd + "\"";
  ftpReply (257, sCurrentPath);
  */
  std::string sEmpty;
  ftpReply (257, sEmpty);
}

void Ftp::rest (const std::string & srestPoint)
{
  /*TODO:re-implement
  waitDataConnection ();
  if (!userLoggedIn ())
    return;
  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);
  pFtpuserData->m_nrestartOffset = strtoul (srestPoint.c_str (), NULL, 10);
  */
  ftpReply (350);
}

void Ftp::syst ()
{
  /*TODO:re-implement
  waitDataConnection ();
  if (!userLoggedIn ())
    return;
  */
  std::string sTempText;
  getFtpReply (215, sTempText);
  std::string::size_type n = sTempText.find ("%s");
  if (n != std::string::npos)
#ifdef WIN32
    sTempText.replace (n, 2, "WIN32");
#else
  sTempText.replace (n, 2, "UNIX type: L8");
#endif
  ftpReply (215, sTempText);
}

void Ftp::statCmd (const std::string & sParam/* = ""*/)
{
  /*TODO:re-implement
  if (!userLoggedIn ())
    return;

  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);

  if (!m_ballowAsynchronousCmds)
    waitDataConnection ();

  if (pFtpuserData->m_nFtpstate == FtpuserData::DATA_CONNECTION_UP)
    {
      std::ostringstream sstat;
      sstat << "Transferring file: " << pFtpuserData->m_sCurrentFileName;
      sstat << " " << pFtpuserData->
        m_nBytesSent << " bytes transferred from " << pFtpuserData->
        m_nFileSize;
      ftpReply (213, sstat.str ());
    }
  else
    {
      /* TODO.  * /
      ftpReply (502);
    }
  */
}

void Ftp::allo (int nSize, int nRecordSize/* = -1*/)
{
  /* TODO.  */
  noop ();
}

void Ftp::stor (const std::string & sPath)
{
  /*TODO:re-implement
  if (!m_bEnablestoreCmds)
    {
      ftpReply (532);
      return;
    }
  retrstor (false, false, sPath);
  */
}

void Ftp::stou (const std::string & sPath)
{
  /*TODO:re-implement
  if (!m_bEnablestoreCmds)
    {
      ftpReply (532);
      return;
    }
  std::string sOutPath, sTempPath (sPath);
  int nCount = -1;
  do
    {
      if (nCount >= 0)
        {
          std::ostringstream sRename;
          sRename << nCount;
          sTempPath = sPath + sRename.str ();
        }
      if (!buildLocalPath (sTempPath, sOutPath))
        return;
      nCount++;
    }
  while (FilesUtility::fileExists (sOutPath));
  retrstor (false, false, sOutPath);
  */
}

void Ftp::dele (const std::string & sPath)
{
  /*TODO:re-implement
  waitDataConnection ();
  std::string sLocalPath;
  if (!userLoggedIn () || !getLocalPath (sPath, sLocalPath))
    return;
  if (!m_bEnablestoreCmds)
    {
      ftpReply (532);
      return;
    }
  std::string sLocalDir, sLocalFileName;
  FilesUtility::splitPath (sLocalPath, sLocalDir, sLocalFileName);

  /* The security file doesn't exist in any case.  * /
  const char *secName = td.st.getData ("security.filename",
                                       MYSERVER_VHOST_CONF |
                                       MYSERVER_SERVER_CONF,
                                       ".security.xml");
  if (!strcmpi (sLocalFileName.c_str (), secName))
    {
      ftpReply (550);
      closeDataConnection ();
      return;
    }
  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);

  if (strcmpi (pFtpuserData->m_suserName.c_str (), "anonymous") == 0)
    {
      if (checkRights ("Guest", "", sLocalFileName, MYSERVER_PERMISSION_WRITE)
          == 0)
        {
          ftpReply (550);
          return;
        }
    }
  else
    {
      if (checkRights (pFtpuserData->m_suserName, pFtpuserData->m_sPass,
                       sLocalFileName, MYSERVER_PERMISSION_WRITE) == 0)
        {
          ftpReply (550);
          return;
        }
    }

  if (FilesUtility::deleteFile (sLocalPath) != 0)
    ftpReply (450);
  */
  ftpReply (250);
}

void Ftp::appe (const std::string & sPath)
{
  /*TODO:re-implement
  if (!m_bEnablestoreCmds)
    {
      ftpReply (532);
      return;
    }
  */
  retrstor (false, true, sPath);
}

void Ftp::mkd (const std::string & sPath)
{
  /*TODO:re-implement
  waitDataConnection ();
  if (!userLoggedIn ())
    return;
  if (!m_bEnablestoreCmds)
    {
      ftpReply (532);
      return;
    }

  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);

  std::string sLocalPath;
  if (!buildLocalPath (sPath, sLocalPath))
    return;

  if (checkRights (pFtpuserData->m_suserName, pFtpuserData->m_sPass,
                   sLocalPath, MYSERVER_PERMISSION_WRITE) == 0)
    {
      ftpReply (550);
      return;
    }
  if (FilesUtility::mkdir (sLocalPath) == 0)
    ftpReply (250);
  else
    ftpReply (501);
  */
}

void Ftp::rmd (const std::string & sPath)
{
  /*TODO:re-implement
  waitDataConnection ();
  if (!userLoggedIn ())
    return;
  if (sPath.empty ())
    {
      ftpReply (550);
      return;
    }
  if (!m_bEnablestoreCmds)
    {
      ftpReply (532);
      return;
    }

  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);

  std::string sLocalPath;
  if (!getLocalPath (sPath, sLocalPath))
    return;

  if (checkRights (pFtpuserData->m_suserName, pFtpuserData->m_sPass,
                   sLocalPath, MYSERVER_PERMISSION_WRITE) == 0)
    {
      ftpReply (550);
      return;
    }
  if (FilesUtility::rmdir (sLocalPath) == 0)
    ftpReply (250);
  else
    ftpReply (501);
  */
}

void Ftp::rnfr (const std::string & sPath)
{
  /*TODO:re-implement
  waitDataConnection ();
  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);
  pFtpuserData->m_sRenameFrom = "";
  if (!userLoggedIn ())
    return;
  std::string sLocalPath;
  if (sPath.empty () || !getLocalPath (sPath, sLocalPath))
    {
      ftpReply (550);
      return;
    }
  std::string sLocalDir, sLocalFileName;
  FilesUtility::splitPath (sLocalPath, sLocalDir, sLocalFileName);

  const char *secName = td.st.getData ("security.filename",
                                       MYSERVER_VHOST_CONF | MYSERVER_SERVER_CONF,
                                       ".security.xml");

  /* The security file doesn't exist in any case.  * /
  if (!strcmpi (sLocalFileName.c_str (), secName))
    {
      ftpReply (550);
      return;
    }
  pFtpuserData->m_sRenameFrom = sLocalPath;
  */
  ftpReply (350);
}

void Ftp::rnto (const std::string & sPath)
{
  /*TODO:re-implement
  waitDataConnection ();
  if (!userLoggedIn ())
    return;
  std::string sLocalPath;
  if (sPath.empty () || !buildLocalPath (sPath, sLocalPath))
    {
      ftpReply (550);
      return;
    }
  if (!m_bEnablestoreCmds)
    {
      ftpReply (532);
      return;
    }

  std::string sLocalDir, sLocalFileName;
  FilesUtility::splitPath (sLocalPath, sLocalDir, sLocalFileName);
  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);

  if (checkRights (pFtpuserData->m_suserName, pFtpuserData->m_sPass,
                   pFtpuserData->m_sRenameFrom,
                   MYSERVER_PERMISSION_WRITE) == 0)
    {
      ftpReply (550);
      return;
    }

  const char *secName = td.st.getData ("security.filename",
                                       MYSERVER_VHOST_CONF |
                                       MYSERVER_SERVER_CONF,
                                       ".security.xml");

  /* The security file doesn't exist in any case.  * /
  if (!strcmpi (sLocalFileName.c_str (), secName))
    {
      ftpReply (550);
      return;
    }
  FilesUtility::isLink (pFtpuserData->m_sRenameFrom);
  if (FilesUtility::renameFile (pFtpuserData->m_sRenameFrom, sLocalPath))
    ftpReply (550);
  else
    ftpReply (250);
  */
}

/* RFC 3659 commands */
void Ftp::size (const std::string & sPath)
{
  /*TODO:re-implement
  waitDataConnection ();
  std::string sLocalPath;

  if (!userLoggedIn () || !getLocalPath (sPath, sLocalPath))
    return;

  std::string sLocalDir, sLocalFileName;
  FilesUtility::splitPath (sLocalPath, sLocalDir, sLocalFileName);

  /* The security file doesn't exist in any case.  * /
  const char *secName = td.st.getData ("security.filename",
                                       MYSERVER_VHOST_CONF |
                                       MYSERVER_SERVER_CONF,
                                       ".security.xml");

  if (!strcmpi (sLocalFileName.c_str (), secName))
    {
      ftpReply (550);
      closeDataConnection ();
      return;
    }

  if (sPath.empty () || !getLocalPath (sPath, sLocalPath))
    {
      ftpReply (550);
      return;
    }

  if (FilesUtility::isDirectory (sLocalPath.c_str ()))
    {
      ftpReply (550);
      return;
    }

  File f;
  if (f.openFile (sLocalPath.c_str (), File::OPEN_IF_EXISTS | File::READ))
    {
      ftpReply (550);
      return;
    }

  char size[12];
  sprintf (size, "%l", f.getFileSize ());
  f.close ();

  ftpReply (213, size);
  */
}

//Implementation
bool Ftp::userLoggedIn ()
{
  /*TODO:re-implement
  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);
  if (pFtpuserData == NULL)
    {
      return false;
    }
  if (pFtpuserData->m_nFtpstate < FtpuserData::USER_LOGGED_IN)
    {
      ftpReply (530);
      return false;
    }
  */
  return true;
}

/*!
 *Converts from relative client's path to local path (out path may not exist).
 *\param sPathIn client's relative path
 *\param sOutPath local path
 *\return Return true if path exist, file is a normal one and is into the ftp's root folder
 */
bool Ftp::buildLocalPath (const std::string & sPath, std::string & sOutPath)
{
  /*TODO:re-implement
  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);

  sOutPath = td.pConnection->host->getDocumentRoot ();

  if (sOutPath.length ())
    sOutPath.append ("/");

  if (sPathIn[0] != '/')
    sOutPath.append (pFtpuserData->m_cwd);

  if (sPathIn[0] != '-')
    sOutPath.append (sPathIn);

  FilesUtility::completePath (sOutPath);

  std::string sDocRoot (td.pConnection->host->getDocumentRoot ());
  FilesUtility::completePath (sDocRoot);
  if (FilesUtility::getPathRecursionLevel (sDocRoot) >
      FilesUtility::getPathRecursionLevel (sOutPath))
    {
      ftpReply (550);
      return false;
    }
  if (FilesUtility::isDirectory (sOutPath) &&
      (sOutPath[sOutPath.length () - 1] != '/'
       && sOutPath[sOutPath.length () - 1] != '\\'))
    sOutPath.append ("/");
  */
  return true;
}

/*!
 *Converts from relative client's path to local path and checks if the path is available.
 *\param sPath client's relative path
 *\param sOutPath local path
 *\return Return true if path exist, file is a normal one and is into the ftp's root folder
 */
bool Ftp::getLocalPath (const std::string & sPath, std::string & sOutPath)
{
  /*TODO:re-implement
  if (!buildLocalPath (sPath, sOutPath))
    return false;

  if (sOutPath.empty () ||
      !FilesUtility::fileExists (sOutPath) ||
      FilesUtility::isLink (sOutPath.c_str ()))
    {
      ftpReply (550);
      return false;
    }
  */
  return true;
}

void Ftp::retrstor (bool bretr, bool bappend, const std::string & sPath)
{
  /*TODO:re-implement
  std::string sLocalPath;
  if (!userLoggedIn ())
    return;

  if ((bretr && !getLocalPath (sPath, sLocalPath)) ||
      (!bretr && !buildLocalPath (sPath, sLocalPath)))
    return;

  std::string sLocalDir, sLocalFileName;
  FilesUtility::splitPath (sLocalPath, sLocalDir, sLocalFileName);

  /* The security file doesn't exist in any case.  * /
  const char *secName = td.st.getData ("security.filename",
                                       MYSERVER_VHOST_CONF |
                                       MYSERVER_SERVER_CONF,
                                       ".security.xml");
  if (!strcmpi (sLocalFileName.c_str (), secName))
    {
      ftpReply (550);
      return;
    }

  int nMask = 0;
  if (bretr)
    nMask = MYSERVER_PERMISSION_READ | MYSERVER_PERMISSION_BROWSE;
  else
    nMask = MYSERVER_PERMISSION_WRITE;

  FtpuserData *pFtpuserData =
    static_cast < FtpuserData * >(td.pConnection->protocolBuffer);

  if (checkRights (pFtpuserData->m_suserName, pFtpuserData->m_sPass,
                   sLocalPath, nMask) == 0)
    {
      ftpReply (530);
      return;
    }

  if (FilesUtility::isDirectory (sLocalPath.c_str ()))
    {
      ftpReply (550);
      return;
    }

  /* FIXME: Log after the file is sent, not before.  * /
  logAccess (0, sLocalPath);

  DataConnectionWorkerThreadData *pData =
    new DataConnectionWorkerThreadData ();
  pData->m_pConnection = td.pConnection;
  pData->m_bappend = bappend || pFtpuserData->m_nrestartOffset > 0;
  pData->m_sFilePath = sLocalPath;
  pData->m_pFtp = this;

  pFtpuserData->m_sCurrentFileName = "";
  pFtpuserData->m_nFileSize = 0;
  pFtpuserData->m_nBytesSent = 0;

  switch (pFtpuserData->m_nFtpRepresentation)
    {
    case FtpuserData::REPR_ASCII:
      Thread::create (&pFtpuserData->m_dataThreadId,
                      bretr ? SendAsciiFile : ReceiveAsciiFile, pData);
      break;
    case FtpuserData::REPR_IMAGE:
      Thread::create (&pFtpuserData->m_dataThreadId,
                      bretr ? SendImageFile : ReceiveImageFile, pData);
      break;
    }
  */
}

/*!
 *Let only first cmd to be handled.
 *\param In client's requests
 *\param Out client's requests without telnet codes
 */
void Ftp::removePipelinedCmds (const std::string &sIn, std::string &sOut)
{
  /*TODO: re-implement
  Out.setLength (0);
  if (In.getRealLength () == 0)
    return;
  int i = 0;
  for (char c = In[i]; c != '\0'; i++, c = In[i])
    {
      Out << c;
      if (c == '\n')
        break;
    }
  Out << '\0';
  */
}

int getFtpReply (int nReplyCode, std::string & sReply)
{
  //TODO: implement
  return 0;
}


