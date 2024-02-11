#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - This program sets bit value to 0 in accordence to the given index.
 * @n: parameter.
 * @index: index.
 * Return: 1 for success, -1 for error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
