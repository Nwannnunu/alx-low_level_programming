#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer of char type
 * @f: pointer to function
 *
 * Return: Always Success
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
