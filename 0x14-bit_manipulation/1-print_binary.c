#include "main.h"

/**
 * print_binary - function prints the binary equivalent of a number
 * @n: number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int val;

	for (a = 63; a >= 0; a--)
	{
		val = n >> a;

		if (val & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
