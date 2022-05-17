#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - variadic function to sum all its parameters
 * @n: unsigned int n
 * Return: return 0 if n == 0 or sum of parameters otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a, sum = 0;
	va_list sumlist;

	va_start(sumlist, n);
	if (n == 0)
		return (0);
	for  (a = 0; a < n; a++)
	{
		sum += va_arg(sumlist, int);
	}
	va_end(sumlist);
	return (sum);
}
