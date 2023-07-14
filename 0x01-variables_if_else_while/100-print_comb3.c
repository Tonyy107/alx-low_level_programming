#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int x, y;

	for (x = 48 ; x <= 57 ; x++)
	{
		putchar(x);
		for (y = 48 + x ; y <= 57 ; y++)
		{
			putchar(y);
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
