#include "main.h"
/**
 * _puts_recursion - prints
 *
 * @s:input
 * Return:0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
