#include<unistd.h>

/**
 * _putchar - writes a character
 * @c: Chracter to output
 *
 * Return: Execution code
 */


int _putchar (char c) 
{
	return (write(1, &c, 1))
}
