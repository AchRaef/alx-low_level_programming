#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p = haystack;
		char *l = needle;

		while (*p == *l && *l != '\0')
		{
			p++;
			l++;
		}

		if (*l == '\0')
			return (haystack);
	}

	return (0);
}
