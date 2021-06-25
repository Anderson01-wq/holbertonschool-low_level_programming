#include "holberton.h"

/**
 * _isdigit - Check if value is digit
 * @c Value of the char
 * Return: 1 if digit, otherwise 0 if not.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
