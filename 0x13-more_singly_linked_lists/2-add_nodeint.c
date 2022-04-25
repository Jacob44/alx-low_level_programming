#include "lists.h"
#include <string.h>

/**
 * add_nodeint - A function that adds a node to the end of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @n: string to add as node
 *
 * Return: pointer to new element of list, NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *begin;

	begin = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = begin;
	return (*head);
}
