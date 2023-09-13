#include <stdio.h>
/**
 * array_iterator - prints each array elem on a newline
 * @array:array
 * @size:size
 * @action:pointer to print
 * Return:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	i = 0;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
