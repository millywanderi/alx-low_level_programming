#include "lists.h"

/**
  * delete_nodeint_at_index - function that deletes node
  * @head:- head of the list
  * @index:- index of node to delete
  * Return:- Always 0 (success)
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *prev, *curr;

	prev = NULL;
	curr = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);

		return (1);
	}

		while (*head != NULL)
		{
			if (count == index)
			{
				prev->next = curr->next;
				free(curr);

				return (1);
			}
			prev = curr;
			curr = curr->next;
			count++;
		}
	return (-1);
}
