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

	if (n > 0)
	{
		sp = 1;

		for (i = n; i > 0; i--)
		{
			_putchar(92);
			_putchar('\n');
			if (i != 1)
			{
				for (k = sp; k > 0; k--)
				{
					_putchar(' ');
				}
				sp++;
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
