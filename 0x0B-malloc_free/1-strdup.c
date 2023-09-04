#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory
 * @str:char
 *
 * Return:0
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = (char *)malloc((i + 1) * sizeof(char));
	for (j = 0; str[j]; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
