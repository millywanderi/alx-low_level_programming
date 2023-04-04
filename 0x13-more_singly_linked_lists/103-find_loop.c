#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *prev, *curr;

	prev = curr = head;
	while (prev && curr && curr->next)
	{
		prev = prev->next;
		curr = curr->next->next;
		if (prev == curr)
		{
			prev = head;
			break;
		}
	}
	if (!prev || !curr || !curr->next)
	{
		return (NULL);
	}
	while (prev != curr)
	{
		prev = prev->next;
		curr = curr->next;
	}
	return (curr);
}
