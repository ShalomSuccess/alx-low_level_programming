#include "main.h"

/**
<<<<<<< HEAD
 * print_line - prints a line of _ n long
 * @n: length of line
 *
 * Return: void
=======
 * print_line- multiplies two numbers
 * @n: accepts an integer
 * Description: program will assign a random number to the variable n each time
 * it is executed.
 *
 * Return: returns the answer
>>>>>>> 93b8dfe121f33feec0413fc37e2c70a71faa8cdc
 */

void print_line(int n)
{
<<<<<<< HEAD
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
=======
	while (n > 0)
	{
		_putchar('_');
		n--;
	}

	if (n <= 0)
		_putchar('\n');
>>>>>>> 93b8dfe121f33feec0413fc37e2c70a71faa8cdc
}
