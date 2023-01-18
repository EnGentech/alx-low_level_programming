#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - main entry
 * @name: print the strings in here
 * @f: point to the strings
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
