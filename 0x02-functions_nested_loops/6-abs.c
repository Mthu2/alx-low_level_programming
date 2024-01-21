#include "main.h"

/**
 * _abs - C0mputers the absolute value of an integer.
 * @c: the number to be computerd.
 * Return: Absolute value of numbers or zero
 */

int _abs(int c)
{

	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
