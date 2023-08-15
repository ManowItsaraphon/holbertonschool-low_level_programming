#include "lists.h"

/**
 * free_list - free a list
 * @head: head of the linked list
 * Return: none
 */

void free_list(list_t *head)
{
	list_t *current;

	if (head == NULL)
		return;

	for (; head; )
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
