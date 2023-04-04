#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* free_listint - does some thing
* @h: l
* Return: 0
*/
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
