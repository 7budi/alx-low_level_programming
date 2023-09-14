#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print all numbers
 * @separator:the string to be printed b/.t numbers
 * @n:the number of integers
 * @...:a variable number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;

	unsigned int i, j;

	j =  0;
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, unsigned int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
