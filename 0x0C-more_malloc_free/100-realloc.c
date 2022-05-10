#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - relocate memory size function
 * @ptr: pointer to address of old location
 * @old_size: unsigned int size of old memory
 * @new_size: unsigned int size of new memory
 * Return: pointer to array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (new_size > old_size)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}

