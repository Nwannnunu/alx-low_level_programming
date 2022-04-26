#include "main.h"
/**
 * _strspn - Fuction that get the lenght of substring
 * @s: segment to return bytes from
 * @accept: The bytes to include
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
