#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of  a dlistint_t list
 *
 * @head: pointer to pointer of head
 * @n: the element to add
 *
 * Return: pointer to the new element
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp = *head;

	while (tmp != NULL)
	{
		tmp = tmp->next;
	}
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node)
	{
		
