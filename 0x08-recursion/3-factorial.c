#include <stdio.h>
#include "main.h"
/**
 * factorial - function that prints factorial of number
 *@n: parameter
 *Return: returns int
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
