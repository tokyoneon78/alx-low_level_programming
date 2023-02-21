#include "main.h"

/**
 * _isalpha - checks for lowercase
 *
 * Return: 1 if uppercase
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
