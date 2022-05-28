#include "lists.h"

/**
 * sum_listint - function to sum data values of nodes
 * @head: pointer to head node
 * Return:  always successful
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
