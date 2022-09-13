#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: an int for the num of the alphabet to check
 *
 * Return: int 1 if alphabetic otherwise 0
 *
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
