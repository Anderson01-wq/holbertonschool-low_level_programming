#include<stdio.h>

/**
 * main - Prints all hex numbers.
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
	for (i = 97; i > 103; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
