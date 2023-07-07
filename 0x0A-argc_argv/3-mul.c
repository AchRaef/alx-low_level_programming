#include <stdio.h>
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
		if (t == 1)
		{
			break;
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

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int r, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error!!\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	r = n1 * n2;

	printf("%d\n", r);

	return (0);
}
