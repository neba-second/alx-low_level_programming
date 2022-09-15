#include "main.h"

/**
 * jack_bauer - prints every minute of jack Bauer
 *
 * Return: no return
 *
 */
void jack_bauer(void)
{
	int mt, mo, st, so;

	for (mt = 0; mt <= 2; mt++)
	{
		if (mt < 2)
		{
			for (mo = 0; mo <= 9; mo++)
			{
				for (st = 0; st <= 5; st++)
				{
					for (so = 0; so <= 9; so++)
					{
						_putchar(mt + '0');
						_putchar(mo + '0');
						_putchar(':');
						_putchar(st + '0');
						_putchar(so + '0');
						_putchar('\n');
					}
				}
			}
		}
		else
		{
			for (mo = 0; mo <= 3; mo++)
			{
				for (st = 0; st <= 5; st++)
				{
					for (so = 0; so <= 9; so++)
					{
						_putchar(mt + '0');
						_putchar(mo + '0');
						_putchar(':');
						_putchar(st + '0');
						_putchar(so + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
