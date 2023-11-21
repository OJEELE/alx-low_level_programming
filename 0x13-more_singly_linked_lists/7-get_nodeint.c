#include "lists.h"
/**
 * get_nodeint_at_index -  function returns the nth node of linked list
 * @head: head of the linked list
 * @index: index of the node
 * Return: the node or NULL if failed.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
