#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - memory allocation using malloc
 * @b: number to allocate memory for
 * Returns: a pointer to the allocated memory
 */


void *malloc_checked(unsigned int b)
{
	unsigned int *a;
	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
