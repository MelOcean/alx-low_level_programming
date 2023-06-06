#include "lists.h"

/**
 * pop_listint - function that deletes the head node of the listint_t list
 * @head: pointer towards the first element in the listint_t linked list
 *
 * Return: the head node data,
 * if linked list empty returns 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);

	return (num);
}
