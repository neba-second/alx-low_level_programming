#include "lists.h"

/**
 * free_listint2 - frees a listint list
 *
 * @head: pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
		}
	}
}
