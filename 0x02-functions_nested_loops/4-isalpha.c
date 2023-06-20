#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @j: the character to be checked
 * Return: 1 if j is a letter, 0 otherwise
 */
int _isalpha(int j);
{
	return ((j >= 'a' && j <= 'z') || (j >= 'A' && j <= 'Z'));
}
