#ifndef _UNIX_H_
#define _UNIX_H_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#define reading_buf_size 1024
extern char **environ;
void *_realloc(void *p, size_t new_s);
void *_memcpy(void *d, const void *s, size_t n);
char *_strchr(const char *str, int c);
int _strlen(const char *s);
char _tolower(char x);
int _strcmp(char *s1, char *s2);
char *_strcat(char *d, char *s);
char *_strdup(char *s);
ssize_t _getline(int fd, char **line, size_t *n);
char *_getenv(char *name);
void dis_prompt();
char *takeinput();
char **split_cmd(char *s);
#endif
