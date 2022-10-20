#include "lists.h"

/**
 * list_len - returns the number of elemnts in a linked list
 *
 * @h: pointer to the first node
 *
 * Return: size of the elements
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp = h;
	int count = 0;

	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
