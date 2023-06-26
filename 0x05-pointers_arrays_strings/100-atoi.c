#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int sign_c = 0;
	unsigned int result = 0;
	int i = 0;
	int t = 0;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len)
	{
		if (s[i] == '-')
		{
			sign_c++;
			i++;
		}
		while (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			t = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			i++;
		}
		i++;
	}
	if (t == 0)
	{
		return (0);
	}
	if (sign_c % 2)
		sign = -1;
	return (sign * result);
}
