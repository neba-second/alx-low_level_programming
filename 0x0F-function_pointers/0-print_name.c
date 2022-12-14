#include "function_pointers.h"

/**
 * print_name - func that prints a name
 * @name: the name to print
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
