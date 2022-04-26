#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Function that searches a string for any of a set byte
 * @s: The string to search
 * @accept: The bytes to search for
 *
 * Return: A pointer to the byte in @s that matches one in @accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

		while (*s)
		{
			for (a = 0; accept[a]; a++)
			{
				if (*s == accept[a])
					return (s);
			}
			s++;
		}
	return (NULL);
}

