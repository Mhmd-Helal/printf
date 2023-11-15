#include "main.h"
/**
 *print_x - convert dec to hex
 *@args: arguments
 *Return: len of bin
 */
int print_x(va_list args)
{
	unsigned int n;
	int remendir[100];
	int i = 0;
	int j;
	int count = 0;

	n = va_arg(args, int);
	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	while (n != 0)
	{
		remendir[i] = n % 16;
		switch (remendir[i] > 9 && remendir[i] <= 15)
		{
			case 10:
				remendir[i] = 'a';
				break;
			case 11;
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
		_putchar(remendir[j] + '0');
		count++;
	}
	return (count);
}
