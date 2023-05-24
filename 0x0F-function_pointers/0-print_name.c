#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Printing a name using a pointer to a function
 * @name: The string to print
 * @f: Pointer to the function that will print the name
 *
 * Return: Nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
