#include "main.h"
#include <unistds.h>
/**
 * _putchar - writes the character c to stdout
 *
 * @c:The character to print
 * Return:Always 0
 * on error -1
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
