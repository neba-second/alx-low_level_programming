#include "lists.h"

/**
 * add_node - adds a new node at the begining of a list_t list
 *
 * @head: a pointer pointer to first pointer in the list
 * @str: the string to store in the list
 *
 * Return: pointer to the new elemenet
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));
		if (new_node)
		{
			new_node->str = strdup(str);
			new_node->len = strlen(str);
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
		else
			return (NULL);
}
