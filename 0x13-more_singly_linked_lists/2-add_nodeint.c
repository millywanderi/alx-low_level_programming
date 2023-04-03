#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the
 * beginning of a listint_t list.
 * @head: pointer to the address of the listint_t list head
 * @n: integer for the new code
 * Return: address of the new element, otherwise NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;

	*head = newnode;
	return (newnode);
}
