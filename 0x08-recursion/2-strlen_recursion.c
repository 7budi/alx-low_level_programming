#include "main.h"
/**
 * _strlen_recursion - count the len
 * @s:The char to be counted
 *
 * Return:the lenght of the char
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s != '\0')
	{
		len = _strlen_recursion(s + 1);
		len++;
	}
	return (len);
}
