#include "lists.h"

/**
 * *add_node_end - function to add node to the end of a list
 * @head: pointer to pointer of list_t struct type
 * @str: pointer to string input
 * Return: Return always Successful
 */

list_t *add_node_end(list_t **head, const char *str)

{
	list_t *tmp;
	list_t *first;
	unsigned int counter;

	counter = 0;

	while (str[counter] != '\0')
	{
		counter++;
	}
	first = malloc(sizeof(list_t));
	if (first ==  NULL)
		return (NULL);
	first->str  = strdup(str);
	first->len  = counter;
	if (*head == NULL)
	{
		*head = first;
		first->next = NULL;
	return (*head);
	}
	tmp =  *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = first;
	first->next = NULL;
	return (*head);
}
