#include "main.h"

/**
 * main - Entry point
 * void print_alphabet(void)- print all alphabet in lowercase, followed by a new line
 * Return: 0
 */

void print_alphabet(void)
{
	char lowcase;

	for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
		_putchar(lowcase);

	_putchar('\n');
}
