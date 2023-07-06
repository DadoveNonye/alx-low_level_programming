#include "lists.h"

/**
 * print_listint - A function that prints all elements of a listint list
 * @h: type of listint to print
 *
 * Return: node number
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}
