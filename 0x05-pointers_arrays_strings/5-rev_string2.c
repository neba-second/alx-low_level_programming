#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: the string pointer
 *
 * Return: int the length
 */
int _strlen(char *s)
{
	char *p = s;

	while(*s)
	{
		s++;
	}
	return (s - p);
}

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 *
 * Return: no return
 */
void rev_string(char *s)
{
	int size = _strlen(s);
	char tmp;
	int t = 0;

	while (t > size / 2)
	{
		tmp = *(s + t);
		*(s + t) = *(s + (size - t));
		*(s + (size - t)) = tmp;
		t++;
	}
}
