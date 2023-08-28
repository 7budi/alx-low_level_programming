#include "main.h"
/**
 * _memcpy - copys memory area
 *
 * @dest:memory where is stored
 * @src:memory where is copied
 * @n:number of byts
 *
 * Return:dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	return (dest);
}
