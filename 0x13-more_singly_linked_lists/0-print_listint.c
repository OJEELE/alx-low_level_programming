#include "lists.h"

/**
 * print_listint - function prints elements of the list
 * @h: pointer to the head of the linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (count = 0; h; count++)
	{
		printf("%d\n", h->n);
	h = h->next;
	}
	return (count);
}
