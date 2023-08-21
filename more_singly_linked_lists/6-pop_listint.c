#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of the list
 * Return: head node's data (n)
 */

int pop_listint(listint_t **head)
{
	int n_aux;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = (*head)->next;
	n_aux = (*head)->n;
	free(*head);
	*head = tmp;

	return (n_aux);
}
