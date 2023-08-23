#include "main.h"
#include <string.h>
/**
 * _strncat - It will concatenate two strings but will at most use n bytea from src
 *
 * @dest:string
 * @src:string
 * @n:represents a maximum number of characters to be appended.
 * Return:dest
 */
char *_strncat(char *dest, char *src, int n){
    strncat( dest,  src, n);
    return (dest);
}
