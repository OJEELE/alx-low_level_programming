#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * positive_or_negative -checks  whether a number is positive, zero, or negative.
 *
 * @i: the integer to be checked.
 *
 * Return: (0) for success.
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
