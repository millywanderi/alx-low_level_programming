#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a
 * new node at a given position.
 * @head: head of the node
 * @idx: position of the node
 * @n: list elements
 * Returns: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *temp;

	current = *head;
	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = current;
		idx--;
		if (current == NULL)
		{
			free(temp);
			return (NULL);
		}
	}
	temp->next = current->next;
	current->next = temp;
	return (temp);
}
