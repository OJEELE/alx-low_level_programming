#include "main.h"
/**
 * _sqrt_recursion -  function returns square root of natural number
 *@n: parameter
 *
 *
 * Return: returns square root of int n.
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	return (_sqrt(1, n));
}
/**
 * _sqrt -function finds the square root
 * @a: previous value
 * @b: the root value
 * Return:  the square root
 */
int _sqrt(int a, int b)
{
	if (a > b)
		return (-1);
	else if (a * a == b)
		return (a);
	return (_sqrt(a + 1, b));
}
