#include "lists.h"

/**
 * add_nodeint - Add new node at the beginning
 * of a linked list
 * @head : Head of a linked list
 * @n : n element
 *
 * Return :Address of the new element. NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listin_t *new;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
