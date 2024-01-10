#include "main.h"
/**
 * _put_recursion - function name
 * @s: paremeter of the function
 */

void _puts_recursion(char *s)
{
if (*s != '\0')
{
	_putchar (*s);
	_put_recursion(s + 1);
}
else
_putchar ('\n');
}

