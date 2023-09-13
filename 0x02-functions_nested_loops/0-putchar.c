#include <unistd.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints the word _putchar, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char word[8] = "_putchar";
	int j;

	for (j = 0; j < 8; j++)
		_putchar(word[j]);
	_putchar('\n');
	return (0);
}
