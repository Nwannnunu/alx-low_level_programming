#include "lists.h"

/**
 * list_len  - function to get length of node
 * @h: pointer to nodes
 * Return: Always succesful
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int count;

	tmp = malloc(sizeof(list_t));
	if (tmp)
		return (0);
	tmp = h;
	count  = 0;
	while (tmp != NULL)
	{
		tmp  = tmp->next;
		count++;
	}
	return (count);
}
