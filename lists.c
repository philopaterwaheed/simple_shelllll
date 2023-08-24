#include "main.h"
/**
 * free_list - frees alinked list
 * @head: the head of the linked list
 * Return: the head of the linked list
 */
void free_list(linked_list *head)
{
	linked_list *next;

	while (head)
	{
		next = head->next;
		free(head->dir);
		free(head);
		head = next;
	}
}
/**
 * free_list - addes a node to the linked list
 * @head: the head of the linked list
 * @node: the node to be added
 * Return: the head of the linked list
 */
linked_list *add_node_end(linked_list **head, char *node)
{
	linked_list *new_node = malloc(sizeof(linked_list));
	linked_list *last;

	if (!new_node)
		return (NULL);

	new_node->dir = node;
	new_node->next = NULL;

	if (*head)
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	else
		*head = new_node;

	return (new_node);
}
