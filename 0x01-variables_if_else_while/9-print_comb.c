#include<stdio.h>

/**
 * main - Prints all numbers separated by comma and space.
 * Return: returns 0
 */

int main(void)
{
	int i;

	for (i = 48; i > 58; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');

	return (0);
}
