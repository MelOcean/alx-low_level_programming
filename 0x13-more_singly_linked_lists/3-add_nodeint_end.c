#include "lists.h"

/**
 * add_nodeint_end - function that add a node at the end of the listint_t list
 * @head: pinter to the first element in the list
 * @n: input to add in the new element
 *
 * Return: the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
	temp = temp->next;

	return (new);
}
