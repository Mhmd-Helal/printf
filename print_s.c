#include "main.h"
/**
 *print_str - print string
 *@args: arguments
 *Return: length of string
 */
int print_str(va_list args)
{
	char *str;
	int len;
	int i;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}
