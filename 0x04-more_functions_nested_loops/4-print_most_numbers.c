#include "main.h"

/**
<<<<<<< HEAD
 * print_most_numbers - prints numbers 0-9 except 2,4
 *
 * Return: void
=======
 * print_most_numbers- multiplies two numbers
 * Description: program will assign a random number to the variable n each time
 * it is executed.
 *
 * Return: returns the answer
>>>>>>> 93b8dfe121f33feec0413fc37e2c70a71faa8cdc
 */

void print_most_numbers(void)
{
<<<<<<< HEAD
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
			_putchar(c);
	}
	_putchar('\n');
=======
	int i = 48;

	while (i < 58)
	{
		if (i != 50 && i != 52)
			_putchar(i);
		i++;
	}
	_putchar(10);
>>>>>>> 93b8dfe121f33feec0413fc37e2c70a71faa8cdc
}
