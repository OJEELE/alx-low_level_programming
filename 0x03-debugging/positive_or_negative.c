#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 *Return always 0 (Success)
 *
 * positive_or_negative - Determines whether a number is positive, zero, or negative.
 * @i: the integer to be checked.
 */

void positive_or_negative(int i)
{
	/*checks whether i is positve, zero or negative*/
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
