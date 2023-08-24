#include "main.h"
#include <string.h>
/**
 * _strcat - concatenate the two strings
 *
 * @dest:string
 * @src:string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int l1, l2;
l1 = strlen(dest);
l2 = strlen(src);
for (int i = 0; i <= l2; i++)
{
dest[l2 + i] = src[i];
dest[l1] = "\0";
}
return (dest);
}
