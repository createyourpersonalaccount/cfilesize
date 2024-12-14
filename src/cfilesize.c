#include <cfilesize.h>
#include <cfilesize/private/unix.h>

unsigned long cfilesize(const char *filename) {
  unsigned long ret = (unsigned long)cfilesize_unix(filename);
  return ret;
}
