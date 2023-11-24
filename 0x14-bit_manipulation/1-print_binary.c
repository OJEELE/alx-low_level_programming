#include "main.h"
/**
 * print_binary - function prints binary representation of a number
 * without suing % or / or malloc
 * @n: integer
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long num = n;

	if (num > 1)
	{
		print_binary(num >> 1);
	}
	_putchar((num & 1) + '0');
}
