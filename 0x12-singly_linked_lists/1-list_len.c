#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints
 * @h: the first
 * Return: the size
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}

	return (size);
}
