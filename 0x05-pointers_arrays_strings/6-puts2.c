#include "main.h"

/**
 * _strlen - gets the length of the string
 * @s: the pointer to the string
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
 * puts2 - prints every other character of the string starting from the first
 * @str: the pointer to the string
 */
void puts2(char *str)
{
	int count = _strlen(str);
	int i;

	for (i = 0; i < count; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
