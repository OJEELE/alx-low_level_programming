#include "lists.h"
/**
 * print_listint_safe - A function that prints the elementsin a  list
 * @head: A pointer to listint_t structure
 * Return: The number of nodes. Exits with 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;

	constant listint_t *first, *sec;

	if (head == NULL)
		return (98);
	while (first && sec && sec->next && head)
	{
		first = first->next;
		sec = sec->next->next;
		if (first == sec)
		{
			printf("-> [%p]\n", (void *)head, head->n);
			exit(98);
		}
		printf("-> [%p]\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	head = NULL;
	return (nodes);
}
