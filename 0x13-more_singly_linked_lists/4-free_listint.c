#include "lists.h"

/**
 * free_listint - functions that frees listint_t list
 * @head: listint_t that will be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
