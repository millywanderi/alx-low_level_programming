#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node at a given index
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded or -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int m;
	listint_t *curr;
	listint_t *prev;

	prev = *head;
	if (index != 0)
	{
		for (m = 0; m < index - 1; m++)
		{
			if (prev == NULL)
				return (-1);
			prev = prev->next;
		}
	}

	if (prev == NULL || prev->next == NULL)
		return (-1);

	curr = prev->next;

	if (index != 0)
	{
		prev->next = curr->next;
		free(curr);
	}
	else
	{
		*head = curr->next;
		free(curr);
	}

	return (1);
}
