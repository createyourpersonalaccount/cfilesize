#include <cfilesize.h>
#include <cfilesize/private/generic.h>

unsigned long cfilesize(const char *filename, int *error) {
  unsigned long ret = (unsigned long)CFILESIZE_FUNCTION(filename, error);
  return ret;
}
