#include "main.h"

/**
 * print_alphabet - prints the alphabet in new line
 *
 * Return: no return value
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
