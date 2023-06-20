#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this is the entry point
 * Return: 0
 */

int main(void)
{
	int f, g, h;

	for (f = '0'; f < '9'; f++)
	{

		for (g = f + 1; g <= '9'; g++
				{

				for (h = g +1; h <= '9'; h++)
				{
				if ((g != f) != h)
				{
				putchar(f);
				putchar(g);
				putchar(h);
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
