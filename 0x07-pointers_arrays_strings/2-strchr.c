#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the pointer to the string
 * @c: the character to look for
 *
 * Return: a pointer to the first occurrence of c
 */
char *_strchr(char *s, char c)
{
	char **ptr = &s;

	while (*s)
	{
		if (*s == c)
		{
			return (*ptr);
		}
		s++;
	}
	return (s);
}
