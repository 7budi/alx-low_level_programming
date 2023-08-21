#include "main.h"
/**
 * swap_int - A function that take swaps the taken numbers
 * @a:intger to swap
 * @b:intger to swap
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
