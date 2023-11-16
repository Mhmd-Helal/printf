#include "main.h"
/**
 *_printf - print all
 *@format: is a character string
 *Return: len of string that print
 */
int _printf(const char *format, ...)
{
	print m[] = {
		{"%s", print_str}, {"%c", print_c},
		{"%%", print_percent}, {"%i", print_i},
		{"%d", print_d}, {"%b", print_b},
		{"%u", print_u}, {"%o", print_o},
		{"%x", print_hex}, {"%X", print_HEX},
		{NULL, NULL}
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
		j = 0;
		while (m[j].f != NULL)
		{
			if (m[j].c[0] == format[i] && m[j].c[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j++;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
