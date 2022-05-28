#include "lists.h"
/**
 * print_listint - function  print the elements of linked list
 * @h: pointer to the first element
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
	{
		printf("Error\n");
	}
	else while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
