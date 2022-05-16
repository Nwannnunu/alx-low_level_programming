#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
 /**
  * struct printer - A new struct type defining a printer.
  * @point: pointer to a data type
  * print: A function that prints
  *
  */

typedef struct printer
{
	char *point;
	void (*print)(va_list arg);
} prt;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
