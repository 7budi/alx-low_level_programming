#include "main.h"
#include <string.h>
/**
 * _strncat - It will concatenate two strings but will at most
 * use n bytes
 *
 * @dest:string
 * @src:string
 * @n:represents a maximum number of characters to be appended.
 * Return:dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
j = 0;
while (dest[i] != "\0")
{
	i++;
}
while (j < n && src[j] != '\0')
{
	dest[i] = src[j];
	i++;
	j++;
}
dest[i] = '\0';
return (dest);
}
