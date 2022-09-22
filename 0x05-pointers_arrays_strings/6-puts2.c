#include "main.h"

/**
 * puts2 - prints every other character starting with the first
 * @str: the string pointer
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
