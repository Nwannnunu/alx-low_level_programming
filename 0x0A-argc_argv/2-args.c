#include <stdio.h>

/**
 * main - prints all argument it recieves
 * @argc: number of command line argumnt
 * @argv: array that contain the program command line argument
 * Return: 0-success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
