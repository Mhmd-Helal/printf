#include "main.h"

int print_b(va_list args)
{
    unsigned int n;
    int remendir[100];
    int i = 0;
    int j;
    int count;

    n = va_arg(args, int);

    while (n != 0)
    {
        remendir[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (j = i - 1; j >= 0; j--)
    {
        _putchar(remendir[j] + '0');
        count++;
    }
    
    return (count);
}
