#include <unistd.h>
/**
 * _putchar - writes the character on stdout
 * @c: The character to print
 * Return: (1), -1 on error
 */

int _putchar(char c)

{

		return (write(1, &c, 1));

}
