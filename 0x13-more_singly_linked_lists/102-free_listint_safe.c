#include "lists.h"

/**
 * free_listint_safe - A function that frees a list
 * @h: A pointer listint_t structure
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *tmp;

	tmp = *h;
	while (tmp)
	{
		tmp = *h;
		tmp = tmp->next;
		free_list(tmp);
		counter++;
	}
	*h = NULL;
	return (counter);
}

/**
 * free_list - A function that frees a listint_t recursively
 * @head: A pointer to the listint_t structure
 * Return: Nothing
 */
void free_list(listint_t *head)
{
	listint_t *tmp;

	if (head)
	{
		tmp = head;
		tmp = tmp->next;
		free(tmp);
		free_list(tmp);
	}
	free(head);
}


