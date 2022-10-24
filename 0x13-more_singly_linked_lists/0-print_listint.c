#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: a header pointer or pointer to the first node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	int count = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
