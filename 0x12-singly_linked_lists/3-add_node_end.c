#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen_recursion - return the length of a string
 *
 * @s: char pointer
 *
 * Return: the length of a string
 */
int _strlen_recursion(const char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}

/**
 * createNode - create a new node
 *
 * @prmStr: name
 *
 * Return: new element
 */
list_t *createNode(const char *prmStr)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(prmStr);
	new->len = _strlen_recursion(prmStr);
	new->next = NULL;

	return (new);
}

/**
 * getLastNode - get last node
 *
 * @prmHeadNode: first node
 *
 * Return: last element
 */
list_t *getLastNode(list_t *prmHeadNode)
{
	if (!prmHeadNode)
		return (NULL);
	if (prmHeadNode->next == NULL)
		return (prmHeadNode);
	else
		return (getLastNode(prmHeadNode->next));
}

/**
 * add_node_end - add a new node
 *
 * @head: first element
 * @str: name
 *
 * Return: last element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	if (head == NULL)
		return (NULL);

	new = createNode(str);
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = getLastNode(*head);
		if (last == NULL)
		{
			printf("failed\n");
			return (NULL);
		}
		last->next = new;
	}

	return (new);
}
