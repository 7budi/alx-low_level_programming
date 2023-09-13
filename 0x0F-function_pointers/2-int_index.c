#include <stdio.h>
/**
 * int_index - return index place if comparison = true, else -1
 * @array:array
 * @size:the size of the array
 * @cmp:compare
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	/*
	 * if (size <= 0)
	 * {
	 * return (-1);
	 * }
	 */
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
