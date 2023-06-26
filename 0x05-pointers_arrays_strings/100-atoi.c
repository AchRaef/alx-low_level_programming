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
	bool found_number = false;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len && e == 0)
	{
		if (s[i] == '-')
			sign = -1;
			i++;
		if (s[i] == '+')
			i++;
		while (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			found_number = true;
			if (!found_number)
			{
				return (0);
			}
			i++;
		}
	}
	return (sign * result);
}
