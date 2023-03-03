<<<<<<< HEAD
#include "main.h"

/**
 * print_numbers - prints numbers 0-9
 *
 * Return: void
=======
#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * print_numbers- multiplies two numbers
 * Description: program will assign a random number to the variable n each time
 * it is executed.
 *
 * Return: returns the answer
>>>>>>> 93b8dfe121f33feec0413fc37e2c70a71faa8cdc
 */

void print_numbers(void)
{
<<<<<<< HEAD
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
=======
	int i = 48;

	while (i < 58)
	{
		_putchar(i);
		i++;
>>>>>>> 93b8dfe121f33feec0413fc37e2c70a71faa8cdc
	}
	_putchar('\n');
}
