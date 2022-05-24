#include "lists.h"

/**
 * print_list - function to print node contents
 * @h: pointer to node struct
 * Return: Always Successful
 */
size_t print_list(const list_t *h)

{
	unsigned int a;
	const list_t *tmp = NULL;

	a = 0;
	tmp = h;

	while (tmp != NULL)
	{
		if (tmp->str ==  NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", tmp->len, tmp->str);

	tmp  = tmp->next;
		a++;
	}
	return (a);
}
