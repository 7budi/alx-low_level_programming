#include <stdio.h>
/**
 * print_name - print name using function pointer
 *
 * @name:string to add
 * @f:pointer to function
 * Return:none
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
