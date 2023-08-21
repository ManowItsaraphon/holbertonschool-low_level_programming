#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head of the list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++, h = h->next)
		;

	return (i);
}
