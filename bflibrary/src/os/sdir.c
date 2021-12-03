/******************************************************************************/
// Bullfrog Engine Emulation Library - for use to remake classic games like
// Syndicate Wars, Magic Carpet, Genewars or Dungeon Keeper.
/******************************************************************************/
/** @file sdir.c
 *     Implementation of related functions.
 * @par Purpose:
 *     Unknown.
 * @par Comment:
 *     None.
 * @author   Tomasz Lis
 * @date     12 Nov 2008 - 05 Nov 2021
 * @par  Copying and copyrights:
 *     This program is free software; you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation; either version 2 of the License, or
 *     (at your option) any later version.
 */
/******************************************************************************/
#include "bfdir.h"

#include <sys/stat.h>
#include <unistd.h>
#include <stdbool.h>

/** Changes the current directory on the specified drive to the specified path.
 *  If no drive is specified in path then the current drive is assumed.
 *  The path can be either relative to the current directory
 *  on the specified drive or it can be an absolute path name.
 *
 * @param path
 * @return
 */
TbResult LbDirectoryChange(const char *path)
{
  // code at 0001:000bc450
  if ( chdir(path) )
    return -1;
  return 1;
}

TbResult LbDirectoryCreate(const char *path)
{
  // code at 0001:000bc478
  if ( mkdir(path) )
    return -1;
  return 1;
}

/** Acquires current working directory.
 *
 * Returns the directory without drive letter and without '/' at end
 */
TbResult LbDirectoryCurrent(char *buf, unsigned long buflen)
{
    // code at 0001:000bc4a0
    if ( getcwd(buf,buflen) == NULL )
      return -1;
    if ( buf[1] == ':' )
      // Unsafe to use strcpy() on overlapping buffers, but we can memmove().
      memmove(buf, buf+2, strlen(buf+2) + 1);
    int len = strlen(buf);
    if ( len > 1 )
    {
      if ( (buf[len-1] == '\\') || (buf[len-1] == '/') )
        buf[len-1] = '\0';
    }
    return 1;
}

/** Checks if a given file entry exist and is a directory.
 */
TbBool LbDirectoryExists(const char *dirname)
{
  // code at 0001:000bc530
  struct stat stbuf;

  if ( access(dirname, 0) || stat(dirname, &stbuf) == -1 )
    return false;
  return S_ISDIR(stbuf.st_mode);
}

/** Removes given empty directory entry.
 */
TbResult LbDirectoryRemove(const char *path)
{
  // code at 0001:000bc578
  if ( rmdir(path) )
    return -1;
  return 1;
}

TbResult LbFileMakeFullPath(const short append_cur_dir,
  const char *directory, const char *filename, char *buf, const unsigned long len)
{
  if (filename==NULL)
    { buf[0]='\0'; return -1; }
  unsigned long namestart;
  if ( append_cur_dir )
  {
    if ( LbDirectoryCurrent(buf, len-2) == -1 )
    { buf[0]='\0'; return -1; }
    namestart = strlen(buf);
    if ( (namestart > 0) && (buf[namestart-1] != '\\') && (buf[namestart-1] != '/'))
    {
      buf[namestart] = '/';
      namestart++;
    }
  } else
  {
    namestart = 0;
  }
  buf[namestart] = '\0';

  if ( directory != NULL )
  {
    int copy_len;
    copy_len = strlen(directory);
    if ( len-2 <= namestart+copy_len-1 )
      return -1;
    memcpy(buf+namestart, directory, copy_len);
    namestart += copy_len-1;
    if ( (namestart > 0) && (buf[namestart-1] != '\\') && (buf[namestart-1] != '/'))
    {
      buf[namestart] = '/';
      namestart++;
    }
    buf[namestart] = '\0';
  }
  if ( strlen(filename)+namestart-1 < len )
  {
    const char *ptr = filename;
    int invlen;
    for (invlen=-1; invlen != 0; invlen--)
    {
     if (*ptr++ == 0)
       {invlen--;break;}
    }
    int copy_len;
    const char *copy_src;
    char *copy_dst;
    copy_len = ~invlen;
    copy_src = &ptr[-copy_len];
    copy_dst = buf;
    for (invlen=-1;invlen!=0;invlen--)
    {
     if (*copy_dst++ == 0)
       {invlen--;break;}
    }
    memcpy(copy_dst-1, copy_src, copy_len);
    return 1;
  }
  return -1;
}

/******************************************************************************/
