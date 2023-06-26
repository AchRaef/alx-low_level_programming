#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;
	int i = 0;
	int len = 0;
	int e = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len && e == 0)
	{
		if (s[i] == '-')
		{
			sign = -1;
			i++;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			e = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		e = 0;
		}
	}
	i++;
	if (e == 0)
	{
		return (0);
	}
	return (sign * result);
}
