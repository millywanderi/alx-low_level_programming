#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list
 * @head: pointer to the address of the listint_t list head
 * @n: integer for the new node
 * Return: address of the new element, otherwise NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *end;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = newnode;
	}
	return (*head);
}
