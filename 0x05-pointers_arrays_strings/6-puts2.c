#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every character of a string
 * @str: Apointer to the character to be printed
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int a;
	int len = strlen(str);
	
	for (a = 0; a < len; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}

