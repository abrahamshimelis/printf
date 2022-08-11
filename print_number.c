#include "main.h"

/**
 * print_number - prints an integer
 * @n: an integer number
 */

int print_number(int n)
{
	unsigned int num, i;
	
	i = 0;

	if (n < 0)
	{
		_putchar('-');
		i++;
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		i++;
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');

	return (i);
}
