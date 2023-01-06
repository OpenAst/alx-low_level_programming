#include "unistd.h"
/**
 * _putchar- to output a value
 * @c: an int
 * Return: 1 on success, 0 on error
 */

int _putchar(char c)

{

		return (write(1, &c, 1));

}
