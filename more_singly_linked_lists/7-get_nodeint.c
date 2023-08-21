#include "lists.h"

/**
 * get_nodeint_at_index - return the node of a listint_t linked list
 * @head: head of the list
 * @index: position to get
 * Return: address of the element
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;

	for (i = 0; head != NULL; i++, head = head->next)
		if (i == (int) index)
			return (head);

	return (NULL);
}
