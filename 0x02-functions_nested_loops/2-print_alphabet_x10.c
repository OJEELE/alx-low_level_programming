#include "main.h"

/**
 * print_alphabet_x10 - Check coke
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: always 0.
 */

void print_alphabet_x10(void)
{
	char i;
	int count = 0;

	while (count <= 9)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		count++;
	}
}
