#include "main.h"

/**
 * _strncpy - copies a string with a given amount
 * @dest: the destination pointer
 * @src: the string pointer to be coppied
 * @n: the amount of bytes to copy
 *
 * Return: pointer to the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
