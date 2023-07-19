#include "main.h"
#include <stdio.h>
/**
 * print_name - print name
 * @name: string to add
 * @f: pointer to function
 * Return: noting
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
