#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - add a new node at the beggining of a list_t
 * @head: pointer to the head pointer
 * @str: a string to be added
 *
 * Return: address of the new element or NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *start;
	int strcount = 0;

	while (str[strcount])
	{
		strcount++;
	}
	start = malloc(sizeof(list_t));
	if (start == NULL)
		return (NULL);
	start->str = strdup(str);
	start->next = *head;
	start->len = strcount;
	*head = start;
	return (start);
}
