#include "main.h"

/**
 *
 * print_alphabet_x10 - This prints the alphabets 10 times
 *
 *
 * Return: On success 1.
 */

void print_alphabet_x10(void)
{

	int i = 0;

	for (i = 0; i < 10; i++)
	{
	
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
	
		}

		_putchar('\n');

	
	}







}
