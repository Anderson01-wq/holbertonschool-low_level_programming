#include "holberton.h"

/**
 * print_triangle - Prints a tringle
 * @size: Size of the triangle.
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int k;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= (size - i); j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
