#include <stdio.h>

/**
 * main - Entry point
 *  __FILE__ - expands to the name of the current input file,
 *  in the form of a C string constant
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
