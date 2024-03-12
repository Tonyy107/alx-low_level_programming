#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (; counter >= 0; counter--)
	{
		_putchar(s[counter]);
	}
	_putchar('\n');
}
