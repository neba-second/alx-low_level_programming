#include "main.h"

/**
 * more_numbers - prints 0-14 10 times
 *
 * Return: no return
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			int o = j % 10;
			int t = j / 10;

			if (j > 9)
			{
				_putchar(t + '0');
			}
			_putchar(o + '0');
		}
		_putchar('\n');
	}
}
