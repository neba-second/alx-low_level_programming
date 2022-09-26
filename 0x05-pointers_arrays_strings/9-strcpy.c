#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: the destination pointer
 * @src: the pointer with the actual string
 *
 * Return: a pointer to a dest value
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (ptr);
}
