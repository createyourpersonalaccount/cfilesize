#include <cfilesize.h>
#include <cfilesize/private/unix.h>

unsigned long cfilesize(const char *filename, int *error) {
  unsigned long ret = (unsigned long)cfilesize_unix(filename, error);
  return ret;
}
