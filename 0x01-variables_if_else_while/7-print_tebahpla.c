#include <stdio.h>

/**
 * main - entery point
 *
 * Return: always 0
 *
 *
 */
int main(void)
{
	int a = 122;

	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
