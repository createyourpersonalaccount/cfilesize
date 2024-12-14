#ifndef CFILESIZE_H_
#define CFILESIZE_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <sys/types.h>

unsigned long cfilesize(const char *filename, int *error);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CFILESIZE_H_ */
