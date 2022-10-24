#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 *
 * @head: pointer to the first node
 * @index: the index to search for
 *
 * Return: pointer to the searched node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;

	while (index--)
	{
		if (tmp != NULL)
			tmp = tmp->next;
		else
			return (NULL);
	}
	return (tmp);
}
