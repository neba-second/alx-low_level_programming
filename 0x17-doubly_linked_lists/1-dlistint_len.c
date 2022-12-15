#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a list
 *
 * @h: pointer to head node
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	int count = 0;

	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
