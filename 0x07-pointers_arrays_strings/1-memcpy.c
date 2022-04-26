#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: The destination
 * @src: The source
 * @n: The number of bytes to be copied
 *
 * Return: Return dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
