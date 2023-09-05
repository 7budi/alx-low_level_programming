#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenat two string allocated is newly memory space
 * @s1:input
 * @s2:input
 *
 * Return: concat s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1 = 0;
	int len2 = 0;
	int i, j, s, r;

	if ((s1 == NULL) | (s2 == NULL))
	{
		return ("");
	}
	while (s1[i] != '\0')
	{
		i++;
		len1 = i;
	}
	while (s2[j] != '\0')
	{
		j++;
		len2 = j;
	}
	ptr = (char *)malloc(sizeof(s1) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (s = 0; s1[s]; s++)
	{
		ptr[s] = s1[s];
	}
	for (r = 0; s2[r]; r++)
	{
		ptr[s] = s2[r];
		s++;
	}
	return (ptr);
}
