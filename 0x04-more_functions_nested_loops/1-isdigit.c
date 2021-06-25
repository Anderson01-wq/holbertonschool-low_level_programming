#include "holberton.h"
/**
 * _isdigit - Check if c is a digit.
 * @c: Digit integer
 *
 * Return: 1 if digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
