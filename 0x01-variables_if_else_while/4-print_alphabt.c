#include<stdio.h>

/**
 * main - Prints all letters
 * Return: returns 0
 */

int main(void)
{
	char c;

	for (c = 97; c < 123; c++)
	{
		if (c != 101 && c != 113)
			putchar(c);
	}
	putchar('\n');
	return (0);
}
