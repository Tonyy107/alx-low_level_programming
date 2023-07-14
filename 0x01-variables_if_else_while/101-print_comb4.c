#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int x, y, z;

	for (x = 48 ; x <= 57 ; x++)
	{
		for (y = 49 + (x - 48) ; y <= 57 ; y++)
		{
			for (z = 50 + (y - 48) ; z <= 57 ; z++)
			{
				putchar(x);
				putchar(y);
				if (x != 55)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
