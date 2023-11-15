#include "main.h"
/**
 *print_X - convert dec to HEX
 *@args: arguments
 *Return: len of bin
 */
int print_X(va_list args)
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
		switch (remendir[i])
		{
			case 10:
				remendir[i] = 'A';
				break;
			case 11:
				remendir[i] = 'B';
				break;
			case 12:
				remendir[i] = 'C';
				break;
			case 13:
				remendir[i] = 'D';
				break;
			case 14:
				remendir[i] = 'E';
				break;
			case 15:
				remendir[i] = 'F';
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
			_putchar(remendir[i]);
		count++;
	}
	return (count);
}
