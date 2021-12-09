
#include <coverage_stubs.h>
#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
#include <UTIL1.h>


/* prototype */
void gcov_exit(void);

// call the coverage initializers if not done by startup code
void static_init(void) {
  void (**p)(void);
  extern uint32_t __init_array_start, __init_array_end; // linker defined symbols, array of function pointers
  uint32_t beg = (uint32_t)&__init_array_start;
  uint32_t end = (uint32_t)&__init_array_end;

  while(beg<end) {
    p = (void(**)(void))beg; // get function pointer
    (*p)(); // call constructor
    beg += sizeof(p); // next pointer
  }
}

void _exit(int status) {
  (void) status;
  gcov_exit();
  for(;;){} // does not return
}

static const unsigned char *fileName; /* file name used for _open() */

int _open (const char *ptr, int mode) {
  (void)mode;
  fileName = (const unsigned char*)ptr; /* store file name for _write() */
  return 0; /* success */
}

int _write(int file, char *ptr, int len) {
  static unsigned char gdb_cmd[128]; /* command line which can be used for gdb */
  (void)file;
  /* construct gdb command string */
  UTIL1_strcpy(gdb_cmd, sizeof(gdb_cmd), (unsigned char*)"dump binary memory ");
  UTIL1_strcat(gdb_cmd, sizeof(gdb_cmd), fileName);
  UTIL1_strcat(gdb_cmd, sizeof(gdb_cmd), (unsigned char*)" 0x");
  UTIL1_strcatNum32Hex(gdb_cmd, sizeof(gdb_cmd), (uint32_t)ptr);
  UTIL1_strcat(gdb_cmd, sizeof(gdb_cmd), (unsigned char*)" 0x");
  UTIL1_strcatNum32Hex(gdb_cmd, sizeof(gdb_cmd), (uint32_t)(ptr+len));
  return len; /* on success, return number of bytes written */
}


int _close(int file) {
  (void) file;
  return 0; /* success closing file */
}

int _fstat(int file, struct stat *st) {
  (void)file;
  (void)st;
  st->st_mode = S_IFCHR;
  return 0;
}

int _getpid(void) {
  return 1;
}

int _isatty(int file) {
  switch (file) {
  case STDOUT_FILENO:
  case STDERR_FILENO:
  case STDIN_FILENO:
    return 1;
  default:
    errno = EBADF;
    return 0;
  }
}

int _kill(int pid, int sig) {
  (void)pid;
  (void)sig;
  errno = EINVAL;
  return (-1);
}

int _lseek(int file, int ptr, int dir) {
  (void)file;
  (void)ptr;
  (void)dir;
  return 0; /* return offset in file */
}


int _read(int file, char *ptr, int len) {
  (void)file;
  (void)ptr;
  (void)len;
  return 0; /* zero means end of file */
}
