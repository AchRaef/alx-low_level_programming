#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, a = 0;
	unsigned long int b;
	unsigned long int c = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		a = c >> i;
		if (b & 1)
			a++;
	}

	return (a);
}
