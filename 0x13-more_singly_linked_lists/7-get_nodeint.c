#include "lists.h"

/**
 * get_nodeint_at_index - function returns nth node of a listint_t linked list
 * @head: the first node in the listint_t linked list
 * @index: index of the node, starting at 0
 *
 * Return: pointer to the node we are seeking, or return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
