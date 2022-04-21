#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - add a new node at the end of a list_t
 * @head: pointer to the head pointer
 * @str: a string to be added
 *
 * Return: address of the new element or NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *test;
	int strcount = 0;

	while (str[strcount])
	{
		strcount++;
	}
	end = malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);
	end->len = strcount;
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
		while(test->next)
		{
			test = test->next;
		}
		test = end;
	}		
	return (end);
}
