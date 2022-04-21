#include "main.h"

/**
 * puts2 - function that prints every character of a string
 * @str: Apointer to the character to be printed
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int a;

	for (a = 0; a < *str; a++)
	{
		if (a % 2 == 0)
		_putchar(str[a]);
	}
	_putchar('\n');
}

