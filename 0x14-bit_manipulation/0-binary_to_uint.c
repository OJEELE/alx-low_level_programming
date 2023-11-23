#include "main.h"
/**
 * binary_to_uint - function convert a binary number to an unisgned int
 * @b: string pointer
 * Return: converted number or 0;
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 1;
	int len = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;


	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);
		if (b[len - 1] == '1')
			i += num;
		num *= 2;
		len--;
	}
	return (i);
}

