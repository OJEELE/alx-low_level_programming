#include "lists.h"
/**
 * listint_len - function returns the number of elemnts
 * @h: pointer to the head of the linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
