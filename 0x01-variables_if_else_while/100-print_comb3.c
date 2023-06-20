#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this is the entry point
 * Return: 0
 */

int main(void)
{
	int b, j;

	for (b = '0'; b < '9'; b++)
	{

		for (j = b + 1; j <= '9'; j++)
		{
			if (j != b)
			{
				putchar(b);
				putchar(j);
				if (b == '8' && j == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
