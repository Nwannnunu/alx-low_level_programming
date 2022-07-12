#include "main.h"
#include <stddef.h>
/**
 * _strchr - Function to locate character in a string
 * @s: The string
 * @c: The character to locate
 * Return: A pointer to the character or null if the character isn't seen
 *
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
