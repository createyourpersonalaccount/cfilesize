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

#ifndef CFILESIZE_PRIVATE_UNIX_H_
#define CFILESIZE_PRIVATE_UNIX_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <sys/types.h>

off_t cfilesize_unix(const char *filename, int *error);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CFILESIZE_PRIVATE_UNIX_H_ */
