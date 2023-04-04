#include "lists.h"

/**
  * reverse_listint -A function that reverses linked list
  * @head: head of the list
  * Return: a pointer to the first node of the reversed list.
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *temp = NULL;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = previous;
		previous = (*head);
		(*head) = temp;
	}
	(*head) = previous;

	return (*head);
}
