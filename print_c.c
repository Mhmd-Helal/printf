#include "main.h"
/**
 *print_c - print char
 *@args: arguments
 *Return: 1
 */
int print_c(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
