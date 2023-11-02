#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function allocates emory using malloc
 * @b: unsigned input argument
 * Return: returns pointer to allocated memory or NULL IF IT FAILS
 *
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
	free(ptr);
}
