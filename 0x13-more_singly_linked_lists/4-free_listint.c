#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list.
 * @head: freed listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *n;

	while (head)
	{
		n = head->next;
		free(head);
		head = n;
	}
}




