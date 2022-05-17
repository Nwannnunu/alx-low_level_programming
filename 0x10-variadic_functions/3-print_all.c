#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - prints char
 * @arg: A list of args pointing the character
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - prints an integer
 * @arg: A list of args pointing to integer
 */
void print_int(va_list arg)
{
	int number;
	
	number = va_arg(arg, int);
	printf("%d", number);
}

/**
 * print_float - prints a float
 * @arg: List of arguments pointing to a float
 */
void print_float(va_list arg);
{
	float number;

	number = va_arg(arg, double);
	printf("%f", number);
}

/**
 * print_string - prints a string
 * @arg: list of arguments pointing to strings
 */
void print_string(va_list arg)
{
	char *ptr;

	ptr = va_arg(arg, char*);
	if (ptr == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", ptr);
}

/**
 * print_all - print all inputs
 * @format: const pointer to function char
 * Return: Return always success
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int a = 0, j = 0;
	char *separator = "";
	printer_t func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};

	va_start(arg, format);
	while (format && (*(format + a)))
	{
		j = 0;
		while (j < 4 && (*(format + a) != *(func[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			func[j].print(arg);
			separator = ",";
		}
		a++;
	}
	printf("\n");
	va_end(arg);
}
