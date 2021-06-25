#include "holberton.h"

/**
 * _isdigit - Check if value is digit
 * @c Value of the char
 * Return: 1 if digit, otherwise 0 if not.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
