#include "function_pointers.h"
/**
 * print_name - func prints a name
 * @name: string
 * @f: function pointer
 * Return: no return
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
