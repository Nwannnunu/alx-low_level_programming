#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: Th longer string to search from
 * @needle: The substring to search for
 * Return: A pointer to the beginning of the substring, or null
 * if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
