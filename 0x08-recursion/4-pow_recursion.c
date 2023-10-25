#include <stdio.h>
#include "main.h"
/**
 *_pow_recursion - function that return value of x raised to power of y
 *@x: base argument
 *@y: exponent argument
 *
 *Return: return integer
 */
int _pow_recursion(int x, int y)
{
	int result = 1;
	int i;

	if(y < 0)
	{
		return (-1);
	}
	for (i = 0; i < y; y++)
	{
		result = result * x;
	}
	return result;
}
