#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 *
 * @h: a pointer to the list
 *
 * Return: size or number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp = h;
	int count = 0;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", tmp->len, tmp->str);

		tmp = tmp->next;
		count++;
	}
	return (count);
}
