#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - function return the length of a string
 * @s: string pointer
 * Return: returns 1
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
		return (0);

}
