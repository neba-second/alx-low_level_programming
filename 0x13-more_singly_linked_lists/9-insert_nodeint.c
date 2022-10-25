#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 *
 * @h: head ponter
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
        const listint_t *tmp = h;
        int count = 0;

        while (tmp != 0)
        {
                tmp = tmp->next;
                count++;
        }
        return (count);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 *
 * @head: pointer to pointer of first node
 * @idx: the index to insert the node
 * @n: the data to insert in the new node
 *
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new_node;
	unsigned int size;

	ptr = *head;
	size = listint_len(ptr);
	if (idx < size)
	{
	while (idx > 1)
	{
		if (ptr != NULL)
			ptr = ptr->next;
		else
			return (NULL);
		idx--;
	}
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = ptr->next;
		ptr->next = new_node;
		return (new_node);
	}
	else
		return (NULL);
	}
	else
		return (NULL);
}

