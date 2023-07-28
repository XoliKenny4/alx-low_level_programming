#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @d: Pointer to the list_t list
 *
 * Return: number of elements in d
 */
size_t list_len(const list_t *d)
{
	size_t n = 0;

	while (d)
	{
		n++;
		d = d->next;
	}
	return (n);
}
