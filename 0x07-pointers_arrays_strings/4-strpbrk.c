#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes..
 *@s: an input string to search in
 *@accept: second string to locate in string s
 *
 * Return: char with result
 * or NULL if the substring is not found.
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s)
	{
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		j = 0;
		s++;
	}
	return ('\0');
}
