#include "main.h"

/**
 * print_line - prints line to output
 * @n: the length of the line to print
 *
 * Return: no return
 */
void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		_putchar(95);
	}
	_putchar('\n');
}
