#include "main.h"

/**
 * print_alphabet - Prints a-z in lowercase
 *
 * Return: no return
 *
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return;
}
