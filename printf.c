#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 *
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	print m[] = {
		{"%s", print_str}, {"%c", print_c},
		{"%%", print_percent}
	};
	int i = 0;
	int j;
	va_list args;
	int len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].c[0] == format[i] && m[j].c[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
