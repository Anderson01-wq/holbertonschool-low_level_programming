#include "holberton.h"

/**
 * _isupper - Check if value is uuppercase
 * @c: Value of the char
 * Return: 1 if upper, otherwise 0 if not.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
