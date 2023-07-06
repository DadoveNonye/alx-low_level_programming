#include "lists.h"

/**
 * get_nodeint_at_index - A  function that returns the nth
 * node of a listint_t linked lis
 * @head: first node of the linked list
 * @index: index of the node to be returned
 * Return:  NULL if !node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *n = head;

	while (n && i < index)
	{
		n = n->next;
		i++;
	}

	return (n ? n : NULL);
}
