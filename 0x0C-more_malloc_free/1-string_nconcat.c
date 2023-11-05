#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *string_nconcat - function conctenates strings
 * @s1: string argument
 * @s2: string argument
 * @n: unsigned input integer
 * Return: returns pointer to new allocated memory or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0, i = 0;
	char *result;

	if (s1 == NULL)
		s1 = " ";
	while (s1[len1])
		len1++;

	if (s2 == NULL)
		s2 = " ";
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;
	result = (char *)malloc(len1 + n + 1);

	if (result == NULL)
		return (NULL);

	for  (; i < (len1 + n); i++)
	{
		if (i < len1)
			result[i] = *s1, s1++;
		else
			result[i] = *s2, s2++;
	}
	result[i] = '\0';
	return (result);
}
