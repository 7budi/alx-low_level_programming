#include "main.h"
#include <stdlib.h>
/**
 * create_array - create size of size and  assigm char c
 *
 * @size:numbet of bytes
 * @c:assigned character
 *
 * Return:Pointer to array
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	int i;
	char *ptr = (char *)malloc(size * sizeof(char));

	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
