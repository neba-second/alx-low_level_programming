#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: a pointer to the string to be duplicated
 *
 * Return: a pointer to the new string
 */
char *_strdup(char *str)
{
	int i;
	int j;
	char *ptr;

	/* getting length to allocate memory*/
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
