#include "main.h"
/**
 * swap_int = A function that take swaps the taken numbers
 * main - Entry point
 * @a:given
 * @b:given
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
