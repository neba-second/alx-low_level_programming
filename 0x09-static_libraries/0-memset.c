#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: the memory area to fill
 * @b: constant byte
 * @n: number of memory length
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char **ptr = &s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (*ptr);
}
