#include "main.h"

/**
 * _pow_recursion - returns the value of x raised by y
 * @x: the value to be raised
 * @y: the time of number to raise
 *
 * Return: int the value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
