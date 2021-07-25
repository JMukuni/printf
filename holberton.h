#ifndef HOLBERTON
#define HOLBERTON
#include <unistd.h>

int _printf(const char *, ...);
printing_format *parse_format(const char *s);
int buf_push(char *str, int *buffindex, char *buffer);
int *print(const char *str, va_list items, int *buffindex, char *buffer);


#endif
