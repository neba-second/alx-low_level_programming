#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the destination of the copy
 * @src: the src of the copy
 * @n: the amount of bytes to be copied
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char **ptr = &dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (*ptr);
}
