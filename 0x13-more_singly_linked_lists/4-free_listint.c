#include "lists.h"

/**
 * free_listint - function to free list
 * @head: pointer to struct of type listint _t
 * Return: always successful
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
