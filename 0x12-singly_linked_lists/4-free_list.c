#include "lists.h"
#include <string.h>

/**
 * free_list - wfrees a list_t list
 * @head: pointer to a list_t pointer that points to the head struct
 * 
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
