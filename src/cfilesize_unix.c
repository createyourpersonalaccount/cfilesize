#include <cfilesize/private/unix.h>

#include <sys/stat.h>

off_t cfilesize_unix(const char *filename) {
  struct stat statbuf;
  if (stat(filename, &statbuf) == -1) {
    return -1;                  /* TODO FIX ME */
  }
  return statbuf.st_size;
}
