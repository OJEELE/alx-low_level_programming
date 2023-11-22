#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a list
 * @head: A pointer to listint_t structure
 * Return: The address of the node where the loop start, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head, *sec = head;

	while (first && sec && sec->next)
	{

		first = first->next;
		sec = sec->next->next;
		if (first == sec)
		{
			return (first);
		}
	}
	return (NULL);

}

