#include "main.h"

/**
 * _memset - set memory with a constant byte
 * @s: pointer to memory areea to fill
 * @n: The number of byte to fill
 * @b: constant byte
 *
 * Return: A pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

