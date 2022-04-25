#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - the number of elements in a linked list_t list
 *
 * @h: list to browse
 *
 * Return: size of the list
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	else
		return (listint_len(h->next) + 1);
}

/**
 * get_nodeint_at_index - the nth node of a listint_t linked list
 *
 * @head: first element
 * @index: element's number
 *
 * Return: a node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cLoop = 0;

	while (head != NULL)
	{
		if (index == cLoop)
			return (head);
		head = head->next;
		cLoop++;
	}

	return (NULL);
}

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 *			     linked list
 *
 * @head: first element
 * @index: element's number
 *
 * Return: error code
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *before, *after, *current, *first;
	int length;

	first = *head;

	if (first == NULL)
		return (-1);

	length = listint_len(*head);

	if (length == 0 || index > (unsigned int) length - 1)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(first);
		return (1);
	}

	before = get_nodeint_at_index(first, index - 1);
	if (index == (unsigned int) length - 1)
		after = NULL;
	else
		after = get_nodeint_at_index(first, index + 1);

	current = get_nodeint_at_index(first, index);
	before->next = after;
	free(current);

	return (1);
}
