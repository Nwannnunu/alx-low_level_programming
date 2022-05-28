#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function to return number of elements
 * @h: pointer to first elements
 * Return: Always successful
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
