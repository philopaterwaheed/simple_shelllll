#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* add_nodeint_end - does some thing
* @head: l
* @n: l
* Return: 0
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *t;
	
	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	t = *head;
	while (t->next)
		t = t->next;
	t->next = node;
	return (node);
}
