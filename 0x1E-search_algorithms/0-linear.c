#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * linear_search - function that searches for a value
 * @value - value to be targeted
 * @array - the array to be traversed
 * @size - the length of the array
 * Return: value, or -1 if value not found or array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}
	return (-1);
}
