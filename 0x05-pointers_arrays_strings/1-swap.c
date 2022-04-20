#include "main.h"

/**
 * swap_int - swap the value of two integers a and b
 * @a: A pointer to and integer to be updated
 * @b: B pointer to an integer to be updated
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
