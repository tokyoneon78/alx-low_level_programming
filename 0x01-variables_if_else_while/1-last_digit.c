#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - determine if number is positive or negative
 *
 * Description: program will assign a random number to the variable n each time
 * it is executed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last_digi;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digi = n % 10;
	if (last_digi > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, last_digi);
	}
	else if (last_digi == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, last_digi);
	}
	else if (last_digi < 6 && last_digi != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digi);
	}
	return (0);
}
