#include "lists.h"
#include <string.h>

/**
 * pop_listint - Deletes the head node of a linked list and returns the head
 * @head: pointer to a list_t pointer that points to the head struct
 *
 * Return: pointer to new element of list, NULL on failure
 */
int pop_listint(listint_t **head)
{
	int k;

	if (head == NULL)
		return (0);
	k = (*head)->n;
	head = NULL;
	return (k);
}
