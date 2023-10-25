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
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}

}
