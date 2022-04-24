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
	int l1, l2, i, j;

	l1 = strlen(dest);
	l2 = strlen(src);
		for (i = 0; i <= l2; i++)
		{
			for (j = 0; j <= n; j++)
			{
				dest[l1 + j] = src[j];
			}
			return (dest);
		}
}


