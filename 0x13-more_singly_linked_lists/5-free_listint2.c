#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a struct linked list
 *
 * @head: first element
 *
 * Return: frees a list_t list
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_listint(head->next);
	free(head);
}

/**
 * free_listint2 - free a struct linked list
 *
 * @head: first element
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
	{
		return;
	}

	new = *head;
	*head = NULL;
	free_listint(new);
}
