#include "main.h"

/**
 * _puts - prints a string
 * @str: A pointer to an integer that will be changed
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	char *c;
	int n;

	c = str;
	for (n = 0; c[n]; n++)
	{
		_putchar(c[n]);
	}
	_putchar('\n');
}
