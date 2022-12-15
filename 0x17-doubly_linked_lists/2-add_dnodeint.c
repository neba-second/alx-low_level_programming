#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a dlistint_t
 *
 * @head: pointer to pointer of head
 * @n: the element to add
 *
 * Return: the address of the new element or NULL if it failed
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		return (NULL);
	}
}
