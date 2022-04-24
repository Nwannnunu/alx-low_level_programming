#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates n number of strings from source to destination
 * @dest: The destination string
 * @src: The source string
 * @n: the number of string to concatenate
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != 0)
	{
		i++;
	}

	b = 0;

	while (src[j] != 0 && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
