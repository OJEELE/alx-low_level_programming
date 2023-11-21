#include "lists.h"
/**
 * free_listint - fnction frees linked lists.
 * @head: pointer to head of linked list.
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
