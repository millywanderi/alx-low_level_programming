#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list
 * @h: pointer to the head of the listint_t list.
 * Return: number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
