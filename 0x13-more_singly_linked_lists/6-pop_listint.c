#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: head of the list
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int m;
	listint_t *delete = NULL;

	if (*head == NULL)
	{
		return (0);
	}
	delete = (*head)->next;
	m = (*head)->n;
	free(*head);
	*head = delete;
	return (m);
}
