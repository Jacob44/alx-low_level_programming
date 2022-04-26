#include "lists.h"
#include <string.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a list_t pointer that points to the head struct
 * @idx: index
 * @n: the value to be added
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0;
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	tmp = *head;
	new_node->n = n;
	if (head == NULL)
		return (NULL);
	while (*head)
	{
		if (counter == (idx - 1))
		{
			new_node->next = ((*head)->next);
			(*head)->next = new_node;
			*head = tmp;
			return (*head);
		}
		(*head) = (*head)->next;
		counter++;
	}
	return (*head);
}
