#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at
 * the end of a listint_t list.
 * @head: first element pointer
 * @n: data to be inserted
 *
 * Return: Addres to new element || NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *freshNode;
	listint_t *temp = *head;

	freshNode = malloc(sizeof(listint_t));
	if (!freshNode)
		return (NULL);

	freshNode->n = n;
	freshNode->next = NULL;

	if (*head == NULL)
	{
		*head = freshNode;
		return (freshNode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = freshNode;

	return (freshNode);
}
