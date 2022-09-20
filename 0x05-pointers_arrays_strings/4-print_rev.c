#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string
 *
 * Return: no return
 */
void print_rev(char *s)
{
	int i;
	char str;

	int count = 0;

	/* first get the length of the string*/
	while (*s != '\0')
	{
		count++;
		s++;
	}
	for (i = count; i >= 0; i--)
	{
		str = s[i];
		_putchar(str);
	}
	_putchar('\n');
}
