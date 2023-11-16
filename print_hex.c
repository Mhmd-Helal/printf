#include "main.h"
/**
 *print_x - convert dec to hex
 *@args: arguments
 *Return: len of hex
 */
int print_x(va_list args)
{
	unsigned int n;
	int remendir[100];
	int i = 0;
	int j;
	int count = 0;

	n = va_arg(args, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	while (n != 0)
	{
		remendir[i] = n % 16;
		switch (remendir[i])
		{
			case 10:
				remendir[i] = 'a';
				break;
			case 11:
				remendir[i] = 'b';
				break;
			case 12:
				remendir[i] = 'c';
				break;
			case 13:
				remendir[i] = 'd';
				break;
			case 14:
				remendir[i] = 'e';
				break;
			case 15:
				remendir[i] = 'f';
				break;
		}
		n = n / 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		if (remendir[j] <= 9)
			_putchar(remendir[j] + '0');
		else
			_putchar(remendir[j]);
		count++;
	}
	return (count);
}
