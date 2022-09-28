#include "main.h"

/**
 * factorial - prints a factorial of a number
 * @n: the given number
 *
 * Return: int the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * (factorial(n - 1)));
}
