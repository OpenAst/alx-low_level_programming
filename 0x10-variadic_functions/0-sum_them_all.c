#include "variadic_functions.h"

/**
 * sum_them_all - to take the sum of all parameters passed in
 * @n: a const integer
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list = num;
	int sum;
	unsigned int i;

	va_start(num, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; ++)
		sum += va_arg(num, int);

	va_end(ap);

	return (sum);
}
