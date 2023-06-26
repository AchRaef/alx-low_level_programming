#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int len = 0;
	int j = 0;
	char *p = str;
	int i;

	while (*p != '\0')
	{
		p++;
		len++;
	}
	j = len - 1;
	for (i = 0 ; i <= j ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
