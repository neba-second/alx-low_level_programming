#include "main.h"

/**
 * _isdigit - checks if number is 0-9
 * @c: the number to check
 * Return: 1 if is digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c <= 48 && c >= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
