#ifndef CFILESIZE_PRIVATE_GENERIC_H_
#define CFILESIZE_PRIVATE_GENERIC_H_

#ifdef UNIX
#  include <cfilesize/private/unix.h>
#  define CFILESIZE_FUNCTION cfilesize_unix
#endif  /* UNIX */

#endif /* CFILESIZE_PRIVATE_GENERIC_H_ */
