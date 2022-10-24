#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 *
 * @h: head ponter
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	int count = 0;

	while (tmp != 0)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}