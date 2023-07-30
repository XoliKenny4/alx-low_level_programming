#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Allocates memory using malloc
 * @d: number of bytes to allocate
 *
 * Return: Pointer allocated to memory
 */
void *malloc_checked(unsigned int d)
{
	void *ptr;

	ptr = malloc(d);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
