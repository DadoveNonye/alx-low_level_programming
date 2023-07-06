#include "lists.h"

/**
 * pop_listint - A  function that deletes the head node
 * of a listint_t linked list, and returns
 * the head node’s data (n).
 * @head: first element on the list pointer
 *
 * Return: 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *n;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	n = (*head)->next;
	free(*head);
	*head = n;

	return (number);
}
