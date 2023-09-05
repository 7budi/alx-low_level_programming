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
int i, j;
i = 0;
j = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
ptr = malloc(sizeof(i + j + 1));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; s1[i]; i++)
{
ptr[i] = s1[i];
}
for (j = 0; s2[j]; j++)
{
ptr[i] = s2[j];
i++;
}
ptr[i] = '\0';
return (ptr);
}
