/*  cfilesize, portable C library to find the size of a file.
 *  Copyright (C) 2024  Nikolaos Chatzikonstantinou <nchatz314@gmail.com>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <errno.h>
#include <limits.h>
#include <stdlib.h>
#include <sys/stat.h>

#include <cfilesize/private/unix.h>

off_t cfilesize_unix(const char *filename, int *error) {
  struct stat statbuf;
  char path[PATH_MAX];
  if(realpath(filename, path) == NULL) {
    if(error) {
      *error = errno;
    }
    return -1;
  }
  if (stat(path, &statbuf) == -1) {
    if(error) {
      *error = errno;
    }
    return -1;
  } else {
    if(error) {
      *error = 0;
    }
    return statbuf.st_size;
  }
}
