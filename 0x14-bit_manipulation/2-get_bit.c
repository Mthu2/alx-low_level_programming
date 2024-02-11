#include"main.h"

/**
 * get_bit - the  program returns the bit value in accedence to the given index.
 * @n: bit checker (number)
 * @index: location
 *
 * Return: bit value or -1 for errors.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
