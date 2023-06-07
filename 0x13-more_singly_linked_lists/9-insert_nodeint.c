#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at given position
 * @head: pointer to first node in list
 * @idx: index list where new node is added
 * @n: input to insert new node
 *
 * Return: address of new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned in d;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (d = 0; temp && d < idx; d++)
	{
	if (d == idx - 1)
	{
		new->next = temp->next;
		temp->next = new;
	}
	else
		temp = temp->next;
	}
	return (NULL);
}
