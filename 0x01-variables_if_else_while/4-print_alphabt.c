/*
 * author: ojeele joseph samuel
 * https:ojsoftpen.com
 * info@ojsoftpen.com
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char alphabet;

	/*use for loop to print a to z */
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	if (alphabet != 'q' && alphabet != 'e')
		putchar(alphabet);
	}
		putchar('\n');
	return (0);
}
