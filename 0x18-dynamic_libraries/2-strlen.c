#include "main.h"

/**
 * _strlen - length of a string
 * @s: A pointer to an integer that will bae updated
 *
 * Return: void theat means the code is correct
 */

int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

