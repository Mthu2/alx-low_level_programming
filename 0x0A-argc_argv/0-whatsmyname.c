#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Returns Always 0 (Success)
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	print("%s\n", *argv);
	return (0);
}
