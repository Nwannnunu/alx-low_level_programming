#include "lists.h"

/**
 * free_listint2 - function to free list
 * @head: pointer to head
 * Return: always successful
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;
	listint_t *tmp1 = NULL;

	if (head == NULL)
		return;
	tmp = *head;
	while (tmp != NULL)
	{
		tmp1 = tmp;
		tmp = tmp->next;
		free(tmp1);
	}
	*head = NULL;
}
