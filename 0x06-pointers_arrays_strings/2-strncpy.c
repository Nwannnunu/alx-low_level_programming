#include "main.h"
/**
 * _strncpy - The function to copy string
 * @dest: The destination string
 * @src: The source string
 * @n: Number of string to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j, k;

	for (i = 0; dest[i] != '\0'; i++)
	{	
	}
	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	for (k = j; k != i; k++)
	{
		dest[k] = dest[k];
	}
	return (dest);
}
