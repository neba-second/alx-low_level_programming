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
	int i, j;

	if (size % 2 == 0)
	{
		i = size / 2;
	}
	else
	{
		i = (size - 1) / 2;
	}
	for (j = i; j <= i * 2; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
