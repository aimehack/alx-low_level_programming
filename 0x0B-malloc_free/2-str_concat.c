#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two input strings
 * @s1: input one to concatenate
 * @s2: input two to concatenate
 * Return: concatenated string of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i = 0, ci = 0, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[ci] != '\0')
		ci++;

	len = i + ci + 1;
	conct = malloc(sizeof(char) * len);

	if (conct == NULL)
		return (NULL);

	i = ci = 0;

	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		conct[i] = s2[ci];
		i++, ci++;
	}

	conct[i] = '\0';

	return (conct);
}





