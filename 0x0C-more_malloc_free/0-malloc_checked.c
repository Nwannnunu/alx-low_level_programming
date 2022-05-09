#include "main.h"

/**
 * malloc_checked - Allocate memory with malloc
 * @b: unsigned int type
 *
 * Return: Return pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr ==NULL)
		exit(98);
	return (ptr);
}
