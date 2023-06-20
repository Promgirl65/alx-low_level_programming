#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int b;

    b = _isalpha('H');
    _putchar(b + '0');
    b = _isalpha('o');
    _putchar(b + '0');
    b = _isalpha(108);
    _putchar(b + '0');
    b = _isalpha(';');
    _putchar(b + '0');
    _putchar('\n');
    return (0);
}
