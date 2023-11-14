#include "main.h"
/**
 *print_i - print intger
 *@args: arguments
 *Return: 2
 */
int print_i(va_list args)
{
	int n, last, num;

	n = (va_arg(args, int));
	last = n % 10;
	num = n / 10;
	_putchar(num + '0');
	_putchar(last + '0');
	return (2);
}
/**
 *print_i - print intger
 *@args: arguments
 *Return: 2
 */
int print_d(va_list args);
{
	int n, last, num;

	n = (va_arg(args, int));
	last = n % 10;
	num = n / 10;
	_putchar(num + '0');
	_putchar(last + '0');
	return (2);
}

