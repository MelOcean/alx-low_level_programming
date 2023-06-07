#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list
 * @head: pointer to first element in the list
 * @index: index of the node that should be deleted. index stars at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int d = 0;

		if (*head == NULL)
			return (-1);
	{
		while (d < index - 1)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	if (!temp || !(temp->next))
		return (-1);
	temp = temp->next;
	d++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
