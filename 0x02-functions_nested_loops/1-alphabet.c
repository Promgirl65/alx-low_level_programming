#include "main.h"

/**
 * main - Entry point
 * Description - prints the alphabet in lowercase, followed by a new line
 * Return: 0
 */

void print_alphabet(void)
{
	char lowcase;

	for(lowcase = 'a'; lowcase <= 'z'; lowcase++)
		_putchar(lowcase);

	_putchar('\n');

	return (0);
}
