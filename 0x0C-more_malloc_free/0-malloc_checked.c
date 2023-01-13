#include "main.h"
/**
 * malloc_checked- output normal termination of malloc
 * @b: integer for interation
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == '\0')
		exit(98);
	return (i);
}
