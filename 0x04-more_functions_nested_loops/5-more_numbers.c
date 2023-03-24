#include "main.h"

/**
* more_numbers - print 10 times the numbers since 0 up to 14
* Return: 10 times of the numbers since 0 up to 14
*/

void more_numbers(void)
{
	int num, row, count;

	for (row = 1; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;
			if (count > 9)
			{
				_putcher(1 + 48);
				num = count % 10;
			}
			_putcher(num + 48);
		}
		_putcher('\n');
	}
}
