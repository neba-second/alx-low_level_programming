#include "main.h"

/**
 * _islower - checks if the letter is lowercase
 * @c: int of the alphabet
 *
 * Return: int 1 if lower 0 if not
 *
 */
int _islower(int c)
{
	if (c > 97 && c < 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
