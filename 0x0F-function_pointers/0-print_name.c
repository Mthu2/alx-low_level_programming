#include "function_pointers.h"

/**
 * print_name - it prints a name
 *
 * @f: Viriable to hold the string name
 * @name: name to be printed
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
