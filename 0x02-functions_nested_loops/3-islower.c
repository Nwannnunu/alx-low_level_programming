#include "main.h"

/**
 * _islower - checks if a character is lower case
 *
 * Return: 1 if character is lowercase, otherwise 0
 * @c: The character to be checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
