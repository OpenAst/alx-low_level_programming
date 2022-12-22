#include "main.h"
/**
 * _strncpy- to compare two strings
 * @dest: first char
 * @src: second char
 * @n: length
 * Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
