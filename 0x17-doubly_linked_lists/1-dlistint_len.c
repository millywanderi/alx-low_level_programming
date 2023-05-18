#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head node pointer
 * Return: number of elements in a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t index = 0;

	while (h != 0)
	{
		index++;
		h = h->next;
	}
	return (index);
}
