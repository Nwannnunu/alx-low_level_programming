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

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; j <= n; j++)
			dest[i] = src[j];
				i++;
	}
	return (dest);
}
