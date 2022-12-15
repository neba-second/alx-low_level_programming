#include "lists.h"

/**
 * print_dlistint - prints elements of double linked list
 *
 * @h: pointer to the head node
 *
 * Return: number of nodes
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	int count = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
