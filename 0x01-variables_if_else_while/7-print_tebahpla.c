#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this is the entry point
 * Return: 0
 */

int main(void)
{
	char lcase;

	for (lcase = 'z'; lcase >= 'a' -26; lcase--);
	putchar(lcase);
	{
		putchar('\n');
	}

	return (0);
}


