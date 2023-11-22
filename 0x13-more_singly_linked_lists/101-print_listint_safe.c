#include "lists.h"
/**
 * print_listint_safe - A function that prints the elementsin a  list
 * @head: A pointer to listint_t structure
 * Return: The number of nodes. Exits with 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listint_t *b = (listint_t *)head;

	while (b && b > b->next)
	{
		printf("[%p] %d\n", (void *)b, b->n);
		b = b->next;
		nodes++;
	}
	if (b)
	{
		printf("[%p] %d\n", (void *)b, b->n);
		printf("-> [%p] %d\n", (void *)b->next, b->next->n);
		nodes++;
	}
	return (nodes);
}
