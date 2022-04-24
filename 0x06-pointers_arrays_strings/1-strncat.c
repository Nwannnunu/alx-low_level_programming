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
	int l1, l2, i;

	l1 = strlen(dest);
	l2 = strlen(src);
		for ((i = 0); i <= n; i++)
		{
			if (src[i] != '\0' && dest[l1 + i] != '\0')
				dest[l1 + i] = src[i];
		}
			return (dest);

}
