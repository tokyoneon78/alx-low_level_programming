#include "main.h"

/**
 * main - Prints _putchar
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	char text[8] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}

	_putchar('\n');

	return (0);
}
