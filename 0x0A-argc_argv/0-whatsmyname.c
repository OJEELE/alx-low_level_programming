#include "main.h"
#include <stdio.h>
/**
 * main -  program that prints its name, followed by a new line
 * @arg: argument count
 * @argv: argument value, strings that comes after callinf the function
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
