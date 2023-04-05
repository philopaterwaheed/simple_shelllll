#include "lists.h"
#include <stdio.h>

/**
* print_list - prints all the elements of @h list
* @h: the first node of the linked list
* Return: the size of the nodes in the linked list
*/
size_t print_list(const list_t *h)
{
	int cnt = 0;

	while (h)
	{
		printf("[%d] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
		h = h->next;
		cnt++;
	}

	return (cnt);
}
