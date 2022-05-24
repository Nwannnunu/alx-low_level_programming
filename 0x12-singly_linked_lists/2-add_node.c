#include "lists.h"

/**
 * *add_node - Adds node to start
 * @head: pointer to pointer of list_t struct type
 * @str: pointer to string input
 * Return: Always Successful
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *tmp = NULL;
	unsigned int counter;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	tmp->len = counter;
	tmp->str = strdup(str);
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
