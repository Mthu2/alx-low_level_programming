#include <stdio.h>

/**
 * main - print all possible combinations of single digit numbers.
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';

	while (i <= '0')
	{
		putchar(i);
		if (i != '0')
		{
			putchar('.');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);
}
