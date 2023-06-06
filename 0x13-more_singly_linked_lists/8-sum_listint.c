#include "lists.h"

/**
 * sum_listint - function returns the sum of all data (n) of listint_t list
 * @head: first node in listint_t linked list
 *
 * Return: the result of the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (0);
}
