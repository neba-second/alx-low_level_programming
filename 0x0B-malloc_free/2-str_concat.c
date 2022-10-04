#include "main.h"

/**
 * str_concat - concatinates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	i += j;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; s1[j] != '\0'; j++)
		ptr[j] = s1[j];
	for (k = 0; s2[k] != '\0'; k++)
	{
		ptr[j] = s2[k];
		j++;
	}
	return (ptr);
}
