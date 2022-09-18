#include "main.h"

/**
 * times_table - Prints 9 times table
 *
 * Return: no return
 *
 */
void times_table(void)
{
	int i, j, k, o, t;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (j == 9)
                        {
                                _putchar(' ');
                                _putchar(k + '0');
                        }
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
				_putchar(',');
			}
			else if (k > 9)
                        {
                                t = k / 10;
                                o = k % 10;
                                _putchar(' ');
                                _putchar(t + '0');
                                _putchar(o + '0');
                                _putchar(',');
                        }
			else
			{
				_putchar(k + '0');
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
