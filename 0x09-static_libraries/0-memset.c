#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 *@s: first value
 *@b: char to fill to fill the address
 *@n: number of bytes to fill
 *
 * Return: char with result of memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
