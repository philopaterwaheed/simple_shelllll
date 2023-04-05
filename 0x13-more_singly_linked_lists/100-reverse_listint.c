#include "lists.h"

/**
 * reverse_listint - reverses
 * @head: a pointer
 * Return: the first
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nx, *pr = NULL;

	if (!head)
		return (NULL);

	while (*head)
	{
		nx = (*head)->next;
		(*head)->nx = pr;
		pr = *head;
		*head = nx;
	}
	*head = pr;
	return (*head);
}
