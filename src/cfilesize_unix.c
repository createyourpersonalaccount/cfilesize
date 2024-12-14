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
