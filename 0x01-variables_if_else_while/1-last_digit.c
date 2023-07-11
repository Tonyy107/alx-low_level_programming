#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  print the last digit of the number stored in the variable n
 * Return : Always  0
 */
int main(void)
{
	int n , t;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	t = n % 10;
	if(t == 0)
	{
		printf("Last digit of %i is %i and is 0\n" , n , t);
	}
	if(t > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n" , n , t);
	}
	if(t <6 && t > 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n" , n , t);
	}

	/* your code goes there */
	return (0);
}
