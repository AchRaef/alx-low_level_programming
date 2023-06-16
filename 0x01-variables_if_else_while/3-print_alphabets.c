#include <stdio.h>

/**
 * main - Prints the alphabet lowercase then upercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (i < 52)
	{
		putchar(alp[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
