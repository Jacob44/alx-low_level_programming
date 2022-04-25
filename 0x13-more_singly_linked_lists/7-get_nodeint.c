#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: linked list
 * @index: index
 *
 * Return: the node at the required index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
		{
			if (head == NULL)
				return (NULL);
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
