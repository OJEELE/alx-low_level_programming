#include "lists.h"
/**
 * ppo_listint - function deletes node of linked list
 * *head: pointer to head of the linked list
 * Return: returns 1 success or 0 failed
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;

	return (n);
}
