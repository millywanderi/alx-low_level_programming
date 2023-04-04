#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head: head of the list.
 * Return: value of a node index.
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
