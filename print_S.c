#include "main.h"
/**
 *print_S - print string
 *@args: arguments
 *Return: length of string
 */
int print_S(va_list args)
{
	char *str;
	int len;
	int i;
	int cast;

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
		for (i = 0; str[i] != '\0'; i++)
			if (str[i] < 32 || str[i] >= 127)
			{
				_putchar('\\');
				_putchar('x');
				len++;
				cast = str[i];
				if (cast < 16)
				{
					_putchar('0');
					len++;
				}
				len = len + print_HEX_X(cast);
			}
			else
			{
				_putchar(str[i]);
				len++;
			}
		return (len);
	}
}
