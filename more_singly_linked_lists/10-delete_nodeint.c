#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index of a listint_t linked
 * @head: reference to the start of the list
 * @index: index of the node that shold be deleted
 * Return: 1 if deleted or -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i;
	listint_t *tmp;

	for (i = -1; *head != NULL; i++)
	{
		if (i + 1 == (int) index)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
			return (1);
		}

		head = &(*head)->next;
	}

	return (-1);
}
