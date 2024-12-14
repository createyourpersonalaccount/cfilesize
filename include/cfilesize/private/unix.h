#ifndef CFILESIZE_UNIX_H_
#define CFILESIZE_UNIX_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <sys/types.h>

off_t cfilesize_unix(const char *filename);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CFILESIZE_UNIX_H_ */
