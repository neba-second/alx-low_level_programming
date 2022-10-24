#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a list
 *
 * @head: pointer to the first node
 *
 * Return: sum of the data(n)
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
