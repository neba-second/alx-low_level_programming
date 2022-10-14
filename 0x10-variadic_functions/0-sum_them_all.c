#include "variadic_functions.h"

/**
 * sum_them_all - adds all args passed
 * @n: number of arguments
 *
 * Return: integer the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	return (sum);
	va_end(args);
}
