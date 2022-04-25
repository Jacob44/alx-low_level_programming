#include "lists.h"

/**
 * listint_len - prints all the elements of a listint_t list.
 * @h: prints the elements
 *
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
