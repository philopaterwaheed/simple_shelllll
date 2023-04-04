#include "lists.h"
#include <stdio.h>
/**
* listint_len - does some thing
* @h: l
* Return: 0
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
