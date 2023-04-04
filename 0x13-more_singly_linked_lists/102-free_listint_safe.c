#include "lists.h"

/**
 * _ra - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */

listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t m;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (m = 0; m < size - 1; m++)
		newlist[m] = list[m];
	newlist[m] = new;
	free(list);
	return (newlist);
}

/**
 * free_listint_safe - A function that frees a listint_t list.
 * @head: double pointer to the start of the list.
 * Return: the size of the list that was free’d.
 */

size_t free_listint_safe(listint_t **head)
{
	size_t m, count = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (count);
	while (*head != NULL)
	{
		for (m = 0; m < count; m++)
		{
			if (*head == list[m])
			{
				*head = NULL;
				free(list);
				return (count);
			}
		}
		count++;
		list = _ra(list, count, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (count);
}
