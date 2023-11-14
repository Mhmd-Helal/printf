#include "main.h"
/**
 *print_i - print intger
 *@args: arguments
 *Return: len of num
 */
int print_i(va_list args)
{
	int n, nd, last, exp = 1;
	int digit;
	int i = 1;

	n = (va_arg(args, int));
	last = n % 10;
	nd = n / 10;
	if (last < 0)
	{
		_putchar('-');
		n = -n;
		nd = -nd;
		last = -last;
		i++;
	}
	if (nd > 0)
	{
		while (nd / 10 != 0)
		{
			exp = exp * 10;
			nd = nd / 10;
		}
		nd = n / 10;
		while (exp > 0)
		{
			digit = nd / exp;
			_putchar(digit + '0');
			nd = nd - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
/**
 *print_d - print intger
 *@args: arguments
 *Return: len of num
 */
int print_d(va_list args)
{
	int n, nd, last, exp = 1;
	int digit;
	int i = 1;

	n = (va_arg(args, int));
	last = n % 10;
	nd = n / 10;
	if (last < 0)
	{
		_putchar('-');
		n = -n;
		nd = -nd;
		last = -last;
		i++;
	}
	if (nd > 0)
	{
		while (nd / 10 != 0)
	{
		exp = exp * 10;
		nd = nd / 10;
	}
	nd = n / 10;
	while (exp > 0)
	{
		digit = nd / exp;
		_putchar(digit + '0');
		nd = nd - (digit * exp);
		exp = exp / 10;
		i++;
	}
	}
	_putchar(last + '0');
	return (i);
}
