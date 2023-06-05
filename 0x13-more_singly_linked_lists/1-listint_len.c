#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: the linked list of the type listint_t to print
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h);
{
	size_t num = 0
	while (h)
	{
	h = h->next;
	}

	return (0);
}
