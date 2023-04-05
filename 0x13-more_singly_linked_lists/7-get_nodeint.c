#include "lists.h"
#include <stdio.h>
/**
* get_nodeint_at_index - does some thing
* @head: l
* @index: l
* Return: 0
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count = 0;

	while (count < index)
	{
		h = h->next;
		count++;
		if (h == NULL)
			return (NULL);
	}
	return (h);
}
