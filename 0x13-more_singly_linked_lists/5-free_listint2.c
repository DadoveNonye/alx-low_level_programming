#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list
 * @head: listint_t list to be freed pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *n;

	if (head == NULL)
		return;

	while (*head)
	{
		n = (*head)->next;
		free(*head);
		*head = n;
	}

	*head = NULL;
}
