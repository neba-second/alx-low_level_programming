#include "main.h"

/**
 * main - prints _putchar with a new line
 *
 * Return: int 0
 *
 */
int main(void)
{
	char str[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
