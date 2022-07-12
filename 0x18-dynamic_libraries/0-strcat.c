#include "main.h"
#include <string.h>
/**
 * _strcat - function that concatenates 2 string
 * @dest: The detination string
 * @src: The source string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}

