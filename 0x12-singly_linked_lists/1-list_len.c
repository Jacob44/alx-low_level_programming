#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints the number of nodes inside the link..
 * @h: link list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
