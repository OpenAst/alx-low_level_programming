#include "main.h"
/**
 * *_strcat- to concatenate two strings
 * @dest: first string
 * @src: second string
 * Return: a pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
