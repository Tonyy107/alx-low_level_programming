#include <stdio.h>
/**
<<<<<<< HEAD
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
			putchar(x);
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
=======
* main - entry point
* Return: 0
*/
>>>>>>> fc8f5df2dc12203cb4e481b2a5783d0ba6e9a602
