#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_string - print the string
 * @separator: separates b/t strings
 * @n:number of variable
 * @...:avariable number of string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;

	unsigned int i;

	char *strs;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		strs = va_arg(str, char*);
		if (strs == NULL)
			printf("(nil)");
		else
			printf("%s", strs);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
