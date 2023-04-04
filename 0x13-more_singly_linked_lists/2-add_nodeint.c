#include "lists.h"
#include <stdio.h>
/**
* add_nodeint - does some thing
* @head: l
* @n: l
* Return: 0
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
