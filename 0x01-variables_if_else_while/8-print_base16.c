#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this is the entry point
 * Return: 0
 */

int main(void)
{
	int b;
	char low;

	for (b = '0'; b <= '9'; b++)
		putchar(b);

	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
