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

#include <cfilesize.h>
#include <cfilesize/private/generic.h>

unsigned long cfilesize(const char *filename, int *error) {
  unsigned long ret = (unsigned long)CFILESIZE_FUNCTION(filename, error);
  return ret;
}
