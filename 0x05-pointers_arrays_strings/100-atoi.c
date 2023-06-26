#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int sign_count = 0;
	unsigned int result = 0;
	int i = 0;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len)
	{
		if (s[i] == '-')
			sign_count++;
			i++;
		else if (s[i] == '+')
			i++;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			t = 1;
			i++;
		}
		else
		{
			i++;
		}
	}
	if (result == 0)
	{
		return (0);
	}
	else
	{
		if (sign_count % 2)
			sign = -1;
		return (sign * result);
	}
}
