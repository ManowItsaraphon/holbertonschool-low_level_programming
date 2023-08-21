#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at the given position
 * @head: head of the list
 * @idx: index
 * @n: value of the new element
 * Return: address of the new element
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;

		return (new);
	}

	for (i = 0; *head != NULL; i++)
	{
		if (i + 1 == (int) idx)
		{
			new->next = (*head)->next;

			(*head)->next = new;

			return (new);
		}

		head = &(*head)->next;
	}

	return (NULL);
}
