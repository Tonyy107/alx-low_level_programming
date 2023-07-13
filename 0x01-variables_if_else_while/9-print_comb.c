#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int a , b;
	for(b = 0 ; b <= 8 ; b++)
	{
	for (a = 48 ; a <= 57 ; a++)
	{
		putchar(a);
	}
	putchar(44);
	putchar(32);
	}
	putchar('\n');
	return (0);
}
