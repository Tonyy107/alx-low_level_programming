#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int x, y, z, t;

	for (x = 48 ; x <= 57 ; x++)
	{
		for (y = 48 ; y <= 57 ; y++)
		{
			for (z = x ; z <= 57 ; z++)
			{
				for (t = y + 1  ; t <= 57 ; t++)
				{
					putchar(x);
					putchar(y);
					putchar(32);
					putchar(z);
					putchar(t);
					if (x != 57 || y != 56)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
