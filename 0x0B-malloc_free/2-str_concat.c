#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: cnt of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *cnt;
	int i;
	int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	cnt = malloc(sizeof(char) * (i + j + 1));

	if (cnt == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		cnt[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		cnt[i] = s2[j];
		i++, j++;
	}
	cnt[i] = '\0';
	return (cnt);
}
