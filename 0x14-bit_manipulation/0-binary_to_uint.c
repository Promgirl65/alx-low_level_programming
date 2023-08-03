#include "main.h"

/**
 * binary_to_uint - function converts binary number to unsigned int
 * @b: string that contains the binary number
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int un_value = 0;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		un_value = 2 * un_value + (b[n] - '0');
	}

	return (un_value);
}
