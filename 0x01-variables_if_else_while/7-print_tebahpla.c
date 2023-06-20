#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this is the entry point
 * Return: 0
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a' -26; low--);

	putchar(low);
	putchar('\n');

	return (0);
}


