#include "main.h"

/**
 * _abs - returns the absolute value of a number
 * @r: the given number
 *
 * Return: int (absolute value)
 *
 */
int _abs(int r)
{
	if (r < 0)
	{
		return (r * -1);
	}
	else
	{
		return (r);
	}
}
