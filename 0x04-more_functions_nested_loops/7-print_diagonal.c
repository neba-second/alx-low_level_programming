#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: the length of the line
 *
 * Return: no return
 */
void print_diagonal(int n)
{
	int i, k, sp;

	sp = 1;

	for (i = n; i > 0; i--)
	{
		_putchar(92);
		_putchar('\n');

		for (k = sp; k > 0; k--)
		{
			_putchar(' ');
		}
		sp++;
	}
	_putchar('\n');
}
