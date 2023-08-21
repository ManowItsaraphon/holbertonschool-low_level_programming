#include "lists.h"

/**
 * print_listint - prints all the elemens of a listint_t list
 * @h: head of the list
 *
 * Return: numbers of the elements
 */

size_t print_listint(const listint_t *h)

{
	int i;

	for (i = 0; h != NULL; i++, h = h->next)
	{
		printf("%d\n", h->n);
	}

	return (i);
}
