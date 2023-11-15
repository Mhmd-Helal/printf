#include "main.h"
/**
 *print_u - print unsigned intger
 *@args: arguments
 *Return: len of num
 */
int print_u(va_list args)
{
	unsigned int n, num, last, exp = 1;
	int digit;
	int i = 1;

	n = (va_arg(args, int));
	last = n % 10;
	n = n / 10;
	num = n;
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
