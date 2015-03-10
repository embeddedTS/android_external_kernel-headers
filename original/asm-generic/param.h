#ifndef __ASM_GENERIC_PARAM_H
#define __ASM_GENERIC_PARAM_H

#include <uapi/asm-generic/param.h>

# undef HZ
# define HZ		100	/* Internal kernel timer frequency */
# define USER_HZ	100		/* some user interfaces are */
#ifdef __KERNEL__
# define CLOCKS_PER_SEC	(USER_HZ)       /* in "ticks" like times() */
#endif
#endif /* __ASM_GENERIC_PARAM_H */
