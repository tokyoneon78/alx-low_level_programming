#include "holberton.h"

/**
 * _isalpha - checks for lowercase
 * @c: c is an ascii character
 *
 * Return: 1 if uppercase
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
