#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: head of the list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
}
