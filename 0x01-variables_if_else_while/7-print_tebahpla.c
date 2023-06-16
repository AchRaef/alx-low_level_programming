#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 25;

	while (i >=  0)
	{
		putchar(alp[i]);
		i--;
	}
	putchar('\n');
	return (0);
}
