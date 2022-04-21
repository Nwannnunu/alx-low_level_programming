#include "main.h"

/**
 * _strcpy - copies the string
 * @dest: array that returns
 * @src: A pointer that recieve the string
 *
 * Return: the parameter dest
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int j;

	while (src[n] != '\0')
	{
		n++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	j = j;
	while (j <= n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
