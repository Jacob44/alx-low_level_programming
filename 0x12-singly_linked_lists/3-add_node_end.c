#include "lists.h"
#include <string.h>

/**
 * add_node_end - A function that adds a node to the end of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: string to add as node
 * Return: pointer to new element of list, NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *test;
	unsigned int length = 0;

	end = malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);

	while (str[length])
		length++;

	end->len = length;
	end->str = strdup(str);
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
