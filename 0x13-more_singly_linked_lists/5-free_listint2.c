#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: A pointer to head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
