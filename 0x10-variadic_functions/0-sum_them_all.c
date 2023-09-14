#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - add all the given num
 * @n:the number of parameter
 * @...:a variable number of parameter to add
 * Return:if n==0 return 0 else the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, j;

	i = 0;
	j = 0;
	va_list sum;

	va_start(sum, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		j += va_arg(sum, unsigned int);
	}
	va_end(sum);
	return (j);
}
