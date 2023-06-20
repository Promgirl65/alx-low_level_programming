#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this is the entry point
 * Return: 0
 */

int main(void)
{
	int f, g, d;

	for (f = '0'; f < '9'; f++)
	{

		for (g = f + 1; g <= '9'; g++)
				{

				for (d = g +1; d <= '9'; d++)
				{
				if ((g != f) != d)
				{
				putchar(f);
				putchar(g);
				putchar(d);
				if (f == '7' && g == '8')
				continue;
				putchar(',');
				putchar(' ');
				}
				}
				}
				}
				putchar('\n');
				return (0);
				}
