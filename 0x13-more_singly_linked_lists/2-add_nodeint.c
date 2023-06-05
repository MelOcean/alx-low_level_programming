#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t list
 * @head: points to first node in the linked list
 * @n: information to add the new node
 *
 * Return: the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (Null);

		new-n> = n;
	new->next = *head;
	*head = new;

	return (new);
}