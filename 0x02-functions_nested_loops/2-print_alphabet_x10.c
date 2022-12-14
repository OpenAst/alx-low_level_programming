#include "main.h"

/**
 * print_alphabet_x10- to print lowercase letters 10 times
 *
 * Return: 0 SUCCESS
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char alpha;

	while (alpha++ <= 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
