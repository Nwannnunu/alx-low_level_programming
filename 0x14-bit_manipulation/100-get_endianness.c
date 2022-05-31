#include "main.h"

/**
 *get_endianness - function to check for endianness
 *Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *a = (char *)&i;

	if (*a)
		return (1);
	else
		return (0);
}
