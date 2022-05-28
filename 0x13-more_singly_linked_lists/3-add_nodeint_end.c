#include "lists.h"

/**
 * *add_nodeint_end - function to add at the end of the list
 * @head:poniter to the first node
 * @n: const int type
 * Return: Always successful
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first = NULL;
	listint_t *tmp = NULL;

	first = malloc(sizeof(listint_t));
	if (first == NULL)
		return (NULL);
	first->n = n;
	if (*head == NULL)
	{
		*head = first;
		first->next = NULL;
		return (*head);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = first;
	first->next = NULL;
	return (*head);
}
