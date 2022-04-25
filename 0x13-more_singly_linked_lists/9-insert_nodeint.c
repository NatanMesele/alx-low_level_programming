#include "lists.h"
#include <stdlib.h>

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
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: first element
 * @idx: element's number
 * @n: number
 *
 * Return: he address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *before;
	int length;

	new = createNode(n);

	if (head == NULL || new == NULL)
		return (NULL);

	length = listint_len(*head);

	if (idx == 0)
	{
		new->next = (*head);
		*head = new;
		return (new);
	}
	else if (idx > (unsigned int) length)
	{
		return (NULL);
	}
	else
		before = get_nodeint_at_index(*head, idx - 1);

	new->next = before->next;
	before->next = new;

	return (new);
}
