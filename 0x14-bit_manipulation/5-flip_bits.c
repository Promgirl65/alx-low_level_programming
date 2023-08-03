#include "main.h"

/**
 * flip_bits -  returns the number of bits required
 * to flip from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, num = 0;
	unsigned long int c;
	unsigned long int s = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		c = s >> a;
		if (c & 1)
			num++;
	}

	return (num);
}
