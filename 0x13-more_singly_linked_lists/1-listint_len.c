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
