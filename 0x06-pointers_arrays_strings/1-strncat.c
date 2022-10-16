#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: the pointer to the function
 *
 * Return: int the length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * _strncat - appends the src string to the dest string,
 * using n bytes of src
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: the first string
 * @src: the string to be appended
 * @n: the number of bytes to use
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = _strlen(dest);
	char *ptr = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (ptr);
}
