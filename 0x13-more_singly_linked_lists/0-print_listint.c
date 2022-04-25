#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: list to browse
 *
 * Return: size of the list
 */
size_t print_listint(const listint_t *h)
{
	if (!h)
		return (0);
	printf("%d\n", h->n);
	return (print_listint(h->next) + 1);
}
