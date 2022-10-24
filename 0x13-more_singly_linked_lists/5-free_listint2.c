#include "lists.h"

/**
 * free_listint2 - frees a listint list
 *
 * @head: pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	if (*head != NULL)
	{
		while (tmp != NULL)
		{
			tmp = tmp->next;
			free(*head);
			*head = tmp;
		}
		free(*head);
	}
}
