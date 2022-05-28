#include "lists.h"

/**
 * *add_nodeint - function to add node at the beginning
 * @head: pointer to the first node
 * @n: const int type
 * Return: Always successful
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first = NULL;

	first = malloc(sizeof(listint_t));
	if (first == NULL)
		return (NULL);
	first->n = n;
	first->next = *head;
	*head = first;
	return (*head);
}
