#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at
 * the beginning of a listint_t list
 * @head: first node pointer
 * @n: new node data
 *
 * Return: new node address || NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *freshNode;

	freshNode = malloc(sizeof(listint_t));
	if (!freshNode)
		return (NULL);

	freshNode->n = n;
	freshNode->next = *head;
	*head = freshNode;

	return (freshNode);
}


