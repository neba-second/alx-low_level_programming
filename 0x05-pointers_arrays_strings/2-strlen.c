#include "main.h"

/**
 * _strlen - counts the length of the string
 * @s: the string passed in
 *
 * Return: int the length of the string
 */
int _strlen(char *s)
{
	long int count;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
