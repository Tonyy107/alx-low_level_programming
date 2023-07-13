#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = 48 ; a <= 57 ; a++)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(44);
			putchar(32);
		}
	putchar('\n');
	return (0);
}
