#include <stdio.h>

/**
 * main - prints number of argument passed into it
 * @argc: number of command line argument
 * @argv: array that contains the program command line argument
 * @__attribute__((unused)): to compile functions with unused variables
 * Return: 0-success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
