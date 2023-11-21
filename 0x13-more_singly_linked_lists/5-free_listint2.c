#include "lists.h"
/**
 * free_listint2 - function frees linked list
 * @head: pointer to head of linked list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *current2;

	if (head == NULL || *head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		current2 = current->next;
		free(current);
		current = current2;
	}
	*head = NULL;
}

