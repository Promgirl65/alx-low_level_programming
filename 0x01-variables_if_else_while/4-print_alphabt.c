#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this is the entry point
 * Return: 0
 */
int main(void)
{
	char lcase, e, q;

	e = 'e';
	q = 'q';

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
	if (lcase != e && lcase != q)
	putchar(lcase);
	}
	putchar('\n');
	return (0);
}
