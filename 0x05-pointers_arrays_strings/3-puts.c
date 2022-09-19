#include "main.h"

/**
 * _puts - prints out a string
 * @str: the pointer to the string
 *
 * Return: no return
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
