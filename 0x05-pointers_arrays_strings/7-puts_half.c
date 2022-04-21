#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to print half
 *
 * Return: always 0
 */
void puts_half(char *str)
{
	int a = 0;
	int j;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 == 0)
	{
		a = a / 2;
	}
	else
	{
		a = (a + 1) / 2;
	}
	while (str[a] != '\0')
	{
		j = str[a];
		a++;
		_putchar(j);
	}
	_putchar('\n');
}
