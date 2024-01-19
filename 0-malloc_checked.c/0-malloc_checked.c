#include "main.h"
#include <stdlib.h>
/**
 * malloc_checke - allocate memory using malloc
 *
 * @b: input int
 * return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);

	}
	return (ptr);
}
