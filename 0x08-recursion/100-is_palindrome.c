#include "main.h"
#include <stdio.h>
int is_rev_palindrome(char *s, int len);
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
/**
 * is_palindrome - function returns 1 if palindrome or 0 if not
 * @s: string argument
 * Return: returns 1 if palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (is_rev_palindrome(s, len));
}
/**
 * is_rev_palindrome -  function with reversed string
 *@s: input string
 *@len: length of the input string
 * Return: reverse string
 */
int is_rev_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
		return (is_rev_palindrome(s + 1, len - 2));
	return (0);
}
