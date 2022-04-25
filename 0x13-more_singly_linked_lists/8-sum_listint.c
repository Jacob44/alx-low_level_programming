#include "lists.h"

/**
 * sum_listint - the sum of the node values
 * @head: linked list
 *
 * Return: sum of the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
