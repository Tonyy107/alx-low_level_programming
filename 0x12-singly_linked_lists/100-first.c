#include <stdio.h>
/**
 * before_main - function that prints before the main function is executed.
 * Return: nothing
 */
__attribute__((constructor))
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
