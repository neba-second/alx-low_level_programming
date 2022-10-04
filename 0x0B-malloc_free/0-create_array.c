#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array of chars and intializes it with a specal char
 * @size: the size of memory to be allocated
 * @c: the specific char tofill the memory with
 *
 * Return: a pointer to the char
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	else
	{
		ptr = (char *)malloc(size);
		for (i = 0; i <= size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}
}
