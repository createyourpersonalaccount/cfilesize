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
