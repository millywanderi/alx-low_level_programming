#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns
 * the nth node of a listint_t linked list.
 * @head: A pointer to the head of the list.
 * @index: An index of the node required.
 * Return: nth node of a listint_t linked list, otherwise NULL
 * if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_index = 0;

	while (head != NULL)
	{
		if (node_index == index)
		{
			return (head);
		}
		head = head->next;
		node_index++;
	}
	return (NULL);
}
