#include "lists.h"

/**
 * pop_listint - function to delete node from top
 * @head: pointer to head node
 * Return: always successful
 */

int pop_listint(listint_t **head)
{
	listint_t *first = NULL;
	int data = 0;

	if (*head == NULL)
	{
		return (0);
	}
	first = *head;
	data = first->n;
	*head = first->next;
	free(first);
	return (data);
}
