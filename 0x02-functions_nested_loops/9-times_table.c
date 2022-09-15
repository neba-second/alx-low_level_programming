#include "main.h"

/**
 * times_table - Prints 9 times table
 *
 * Return: no return
 *
 */
void times_table(void)
{
	int i, j, result, o, t;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = j * i;
			if (result > 9)
			{
				o = result % 10;
				t = result / 10;
				_putchar(' ');
				_putchar(t + '0');
				_putchar(o + '0');
				_putchar(',');
			}
			else if (result <= 10 && result != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
				_putchar(',');
			}
			else
			{
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
