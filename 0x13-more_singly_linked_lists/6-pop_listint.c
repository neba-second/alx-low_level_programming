#include "lists.h"

/**
 * pop_listint - deletes first node of a list
 *
 * @head: pointer to the first pointer
 *
 * Return: deleted node data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n;

	if (*head != NULL)
	{
		*head = tmp->next;
		n = tmp->n;
		free(tmp);
		return (n);
	}
	else
		return (0);
}
