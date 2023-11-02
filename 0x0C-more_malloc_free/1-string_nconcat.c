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
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	char *result;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	if (n >= len2)
		n = len2;
	result = (char *)malloc(len1 + n + 1);

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);

	strncat(result, s2, n);

	return (result);
	free(result);
}
