#include "lists.h"

/**
 * print_listint - function that prints all the leents of a linked list
 * @h: the linked list of type of listint_t to print
 *
 * Return: the number of nodes
 **/
size_t print_listint(const listint_t *h);

{

	size_t num = 0;
	
	while (h)
	{
		printf("%i\n", h->n);
		num++;
		h = h->next;
	}
	Return (num);
}
