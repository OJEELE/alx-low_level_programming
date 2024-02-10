#include "main.h"

/**
 * flip_bits - function that return the number of bit you would
 * need to flip to get from one number to another
 * @n: number to flip n over m.
 * @m: number to flip to
 * Return: integer
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int xor = (n ^ m);
	unsigned long int max = 0x01;

	while (max <= xor)
	{
		if (max & xor)
			flips++;
		max <<= 1;
	}
	return (flips);
}
