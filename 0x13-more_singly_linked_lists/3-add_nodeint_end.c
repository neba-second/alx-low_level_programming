#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 *
 * @head: pointer to first pointer
 * @n: the data to insert in the new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);
	/*finding the last node*/
	tmp = *head;
	if (*head != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
	tmp->next = new_node;
	}
	else
		*head = new_node;
return (new_node);
}
