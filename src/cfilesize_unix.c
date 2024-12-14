#include <errno.h>
#include <sys/stat.h>

#include <cfilesize/private/unix.h>

off_t cfilesize_unix(const char *filename, int *error) {
  struct stat statbuf;
  if (stat(filename, &statbuf) == -1) {
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
