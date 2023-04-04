#include "main.h"
#include <stdio.h>
/**
* print_listint - does some thing
* @h: l
* Return: 0
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while(h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
