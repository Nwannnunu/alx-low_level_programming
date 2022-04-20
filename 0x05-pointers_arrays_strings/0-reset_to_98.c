#include "main.h"

/**
 * reset_to_98 - reset value to 98
 * @*n: value to derefence
 * @n: adress pointer for a
 * Return: always 0
 */

void reset_to_98(int *n)
{
	int a;

	a = 0;
	n = &a;
	*n = 98;
	_putchar("%d\n", a);
}
