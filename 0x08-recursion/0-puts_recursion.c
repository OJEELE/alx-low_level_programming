#include <stdio.h>
#include "main.h"
/**
 *_puts_recursion- function prints string follwed by new line
 *
 *@s: string to be printed
 *
 *Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
