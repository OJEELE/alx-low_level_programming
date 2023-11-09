#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - function prints name
 *@name: pointer to name to print
 *@f: function pointer to print name
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	f(name);
}
