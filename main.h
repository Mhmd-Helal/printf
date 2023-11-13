#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
int print_c(va_list args);
int print_str(va_list args);
int print_percent(void);
int _strlen(char *s);
int _strlenc(const char *s);
int _putchar(char c);
int _printf(const char *format, ...);
typedef struct format
{
	char *c;
	int (*f)();
} print;


#endif
