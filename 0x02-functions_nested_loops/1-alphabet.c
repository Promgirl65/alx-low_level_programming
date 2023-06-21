#include "main.h"

/**
 * main - Entry point
 * @print_alphabet - print all alphabet in lowercase
 * followed by a new line
 */

void print_alphabet(void)
{
	char lowcase;

	for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
		_putchar(lowcase);

	_putchar('\n');
}
