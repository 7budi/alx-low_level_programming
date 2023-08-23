#include "main.h"
#include <string.h>
/**
 * _strcat - concatenate the two strings 
 *
 * @dest:string
 * @src:string
 * Return: dest
 */
char *_strcat(char *dest, char *src){

    strcat( dest, src);
    return (dest);
}
