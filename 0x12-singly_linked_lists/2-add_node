#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is i
 */
int _strlen(const char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * add_node - add
 * @head: head
 * @str: value
 * Return: the
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);

	node->len = _strlen(str);
	node->next = *head;
	*head = node;

	return (node);
}
