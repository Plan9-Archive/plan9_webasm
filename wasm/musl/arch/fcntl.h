#ifndef __FCNTL_H
#define __FCNTL_H
#include	<sys/types.h>

#define	O_RDONLY 	0
#define	O_WRONLY 	1
#define	O_RDWR	 	2
#define O_ACCMODE	0x003
#define O_NONBLOCK	0x004
#define O_APPEND	0x008		// DM_APPEND
#define O_CREAT		0x100
#define O_TRUNC		0x200		// OTRUNC

#define O_EXCL		0x400
#if 0
#define O_NOCTTY	0x800
#define O_DSYNC		0x1000
#define	O_RSYNC		0x2000
#define O_SYNC		0x4000
#endif
#define O_LARGEFILE	0100000		// Linux large file syscall can be safely ignored
#define O_CLOEXEC	02000000	// OCEXEC

#define	F_DUPFD		0	/* Duplicate fildes */
#define	F_GETFD		1	/* Get fildes flags */
#define	F_SETFD		2	/* Set fildes flags */
#define	F_GETFL		3	/* Get file flags */
#define	F_SETFL		4	/* Set file flags */
#if 0
#define	F_GETLK		5	/* Get file lock */
#define	F_SETLK		6	/* Set file lock */
#define	F_SETLKW	7	/* Set file lock and wait */
#endif

#define FD_CLOEXEC	1

struct flock {
	short	l_type;
	short	l_whence;
	off_t	l_start;
	off_t	l_len;
	pid_t	l_pid;
};

#if 0
#define F_RDLCK		1	/* shared or read lock */
#define F_UNLCK		2	/* unlock */
#define F_WRLCK		3	/* exclusive or write lock */
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern int fcntl(int, int, ...);
extern int open(const char *, int, ...);
extern int creat(const char *, mode_t);

#ifdef __cplusplus
}
#endif

#endif
