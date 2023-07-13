#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 48 ; a <= 57 ; a++)
	{
		putchar(a);
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
