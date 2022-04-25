#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - A function that adds a node to the end of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @n: integer to add as node
 *
 * Return: pointer to new element of list, NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *test;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
		return (NULL);

	end->n = n;
	if (*head == NULL)
	{
		end->next = *head;
		*head = end;
	}
	else
	{
		end->next = NULL;
		test = *head;
		while (test->next)
			test = test->next;
		test->next = end;
	}
	return (end);
}
