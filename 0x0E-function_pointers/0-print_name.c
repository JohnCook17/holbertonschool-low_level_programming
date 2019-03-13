#include "function_pointers.h"

/**
 * print_name - controller function for printing names
 * @name: the name to print
 * @f: funtion options, can pass name as is or capitilize it
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
