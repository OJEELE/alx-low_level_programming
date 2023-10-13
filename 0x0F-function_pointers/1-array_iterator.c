#include <stdio.h>
#include "function_pointers.h"

/**
 * array_ iterator - prints each array element in a new line
 * @array: array
 * @size: number of elements in the array to print
 * action: pointer to print in regular or hex
 * Return: always0 successful execution
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
