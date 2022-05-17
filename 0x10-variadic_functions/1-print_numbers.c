#include "stdio.h"
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - variadic function to print number
 * @separator: The string to be printed between numbers
 * @n: Number of intergers passed to the function
 *
 * Return: Return always success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int a;

	va_start(numbers, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(numbers, int));
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
