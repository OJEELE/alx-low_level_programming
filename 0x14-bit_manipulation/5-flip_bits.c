#include "main.h"

/**
 * flip_bits - function that flips bits from one number to another number
 * @n: first number
 * @m: second number to flip to
 * Return: number of bits that is needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp;
	int count;

	temp = n ^ m;
	count = 0;

	while (temp)
	{
		count++;
		temp &= (temp - 1);
	}

	return (count);
}
