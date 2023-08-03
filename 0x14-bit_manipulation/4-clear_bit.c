#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to set
 * @index: index to set bit
 *
 * Return: 1 - success or -1 - fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int c;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	c = ~(1 << index);
	*n = *n & c;
	return (1);
}
