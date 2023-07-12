#include <stdio.h>
/**
 * main - entry point
 *
 *description - program that prints the alphabet in lowercase
 *
 * return: always  0
 */


int main(void)
{
	int a;

	for (a = 97 ; a <= 122 ; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
