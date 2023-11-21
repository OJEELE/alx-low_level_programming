#include "lists.h"
/**
 * sum_listint - function returns the sum of all the data n
 * @head: head of the list
 * Return: returns sum or 0 iffailed
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

