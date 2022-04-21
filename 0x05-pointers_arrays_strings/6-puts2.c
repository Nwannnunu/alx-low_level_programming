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
	char s[32] = " ";


	for (a = 0; a < *str; a += 2)
	{
		_putchar(str[a]);
		s[a / 2] = str[a];
	}
	_putchar('\n');
}

