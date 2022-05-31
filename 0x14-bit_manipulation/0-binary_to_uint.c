#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointer to char string input
 * Return: always successful
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	unsigned int check = 1;
	int len;

	if (!b)
		return (0);
	len = 0;
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		count <<= 1;
		if (b[len] == '1')
		{
			count ^= check;
		}
		len++;
	}
	return (count);
}
