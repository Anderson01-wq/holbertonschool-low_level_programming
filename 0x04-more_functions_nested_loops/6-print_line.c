#include "holberton.h"

/**
 * print_line - Print line.
 * @n: Number of lines with a __
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
