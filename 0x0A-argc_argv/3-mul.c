#include <stdio.h>

/**
 * main - multipliers two integers
 * @argc: number of command line arguments
 * @argv: array that contain the program command line argument
 * Return: 0-success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
