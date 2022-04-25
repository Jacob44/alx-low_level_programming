#include "lists.h"
#include <string.h>

/**
 * free_listint2 - frees a list_t list
 * @head: pointer to a list_t pointer that points to the head struct
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	tmp = *head;
	while (*head != NULL)
	{
		tmp = (*head);
		(*head) = (*head)->next;
		free(tmp);
	}
	(*head) = NULL;
}
