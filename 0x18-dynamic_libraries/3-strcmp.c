#include "main.h"
/**
 * _strcmp - function to compare strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: 0 if strings are same, - if s1 is less, + if s1 is greater
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && j == 0)
	{
		j = s1[i] - s2[i];
		i++;
	}
	return (j);
}
