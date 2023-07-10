#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * @array - array of integers
 * main - Entry point
 * Return: Always EXIT_SUCCESS
 */

int main(void)
{
	int array[] = {1,2,3,4,7,8,10,20,21,30};

	size_t size = sizeof(array) / sizeof(array[0]);


	printf("Found %d at index: %d\n\n", 8, binary_search(array, size, 8));
	printf("Found %d at index: %d\n\n", 10, binary_search(array, 6, 10));
	
	return (EXIT_SUCCESS);
}
