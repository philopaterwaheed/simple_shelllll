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
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == 0)
	{
		return (0);
	}
	t = head;
	head = t->next;
	n = t->n;
	free(t);
	return (n);
}
