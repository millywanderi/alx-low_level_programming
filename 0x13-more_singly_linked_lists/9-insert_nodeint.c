#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a
 * new node at a given position.
 * @head: head of the node
 * @idx: position of the node
 * @n: list elements
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *curr, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		curr = *head;
		for (m = 0; m < idx - 1 && curr != NULL; m++)
		{
			curr = curr->next;
		}
		if (curr == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = curr->next;
	curr->next = new;
	return (new);
}
