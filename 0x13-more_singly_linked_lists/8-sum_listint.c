#include "lists.h"
#include <stdio.h>
/**
* sum_listint - does some thing
* @h: l
* Return: 0
*/
int sum_listint(listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
