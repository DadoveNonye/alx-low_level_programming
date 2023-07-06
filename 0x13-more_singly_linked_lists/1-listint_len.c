#include "lists.h"

/**
 * listint_len - A function that returns the number of
 * elements in a linked listint_t list.
 * @h: type of listint_t to traverse
 *
 * Return: node number
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}


