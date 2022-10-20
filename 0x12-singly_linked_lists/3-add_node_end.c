#include "lists.h"

/**
 * add_node_end - adds a new node to the list at the end
 *
 * @str: string to be inserted to be in the node
 * @head: pointer to the first element
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;

	tmp = *head;
	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node)
	{
		new_node->next = NULL;
		new_node->str = strdup(str);
		new_node->len = strlen(str);
	}
	else
		return (NULL);
	if (tmp != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);

}
