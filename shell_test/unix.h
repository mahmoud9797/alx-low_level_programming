#ifndef _UNIX_H_
#define _UNIX_H_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void *_realloc(void *p, size_t new_s);
char _memcpy(char *d, char *s, size_t n);

#endif
