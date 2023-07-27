#include <stdio.h>
#include "lists.h"

void first(void) __attribute__ ((constructor));

/**
 * first: prints sentence
 * before executing the main function
 * printf: function that prints
 *
 * Return: no return
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
