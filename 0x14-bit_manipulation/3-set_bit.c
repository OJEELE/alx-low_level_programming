#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: unsigned integeer to be set.
 * @index: the index where to be set.
 * Return: 1 success or -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	*n |= max;
	return (1);
}
