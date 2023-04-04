#include "lists.h"

/**
  * delete_nodeint_at_index - function that deletes node
  * @head:- head of the list
  * @index:- index of node to delete
  * Return:- Always 0 (success)
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int m;
	listint_t *curr, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	curr = *head;
	for (m = 0; m < index - 1; m++)
	{
		if (curr->next == NULL)
			return (-1);
		curr = curr->next;
	}
	next = curr->next;
	curr->next = next->next;
	free(next);
	return (1);
}
