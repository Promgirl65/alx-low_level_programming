#include "main.h"
#include <unistd.h>

/**
 * _putchar - function writes the character c to stdout
 * @c: The character to be printed
 *
 * Return: 1 (Success)
 * If error, -1 is returned
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
