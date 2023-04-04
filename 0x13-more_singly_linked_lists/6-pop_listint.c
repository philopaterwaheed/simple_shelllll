#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* pop_listint - does some thing
* @head: l
* Return: 0
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *t;

	if (head == NULL)
		return (0);
	if (*head == 0)
	{
		return (0);
	}
	t = *head;
	*head = t->next;
	n = t->n;
	free(t);
	return (n);
}
