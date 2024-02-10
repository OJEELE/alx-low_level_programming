#include "main.h"

/**
 * get_bit - Function that returns value of a bit at given index.
 * @n: number to getbit from
 * @index: is the index, starting from 0 0f the bit you need to get
 * Return: returns value at an index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0);
}
