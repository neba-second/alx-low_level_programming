#include "main.h"

/**
 * _strlen - counts the length of the string
 * @s: the pointer to the string
 *
 * Return: int the length of the string
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
 * puts_half - prints the second half of the string
 * @str: the pointer to the string
 */
void puts_half(char *str)
{
	int size = _strlen(str);
	int i;

	if (size % 2 == 0)
	{
		i = size / 2;
	}
	else
	{
		i = (size - 1) / 2;
	}
	while (i < size)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
