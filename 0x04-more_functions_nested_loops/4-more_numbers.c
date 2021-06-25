#include "holberton.h"

/**
 * more_numbers - Print 0-9 digits 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;
	int c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				c = a % 10;
				_putchar('0' + (a / 10));
			}
			else
				c = a;
			_putchar('0' + c)

		}
		_putchar('\n');
	}
}
