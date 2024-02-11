#include <unistd.h>

/**
 * _putchar - inputs c to stdout
 * @c: character printed
 * Return:  1.
 * error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
