#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - variadic function to print string wit new line
 * @separator: string to be printed between the strings
 * @n: nuber of funtions passed to the strings
 * Return: Return success always
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mystring;
	char *p;
	unsigned int a;

	va_start(mystring, n);
	for (a = 0; a < n; a++)
	{
		p = va_arg(mystring, char*);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(mystring);
}
