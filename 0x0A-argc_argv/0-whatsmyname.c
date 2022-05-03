#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * _attribute_((unused)): to warn about used variable @argc
 * @argc: number of command line argument
 * @argv: array tha contains the program command line argument
 * Return: 0-success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
