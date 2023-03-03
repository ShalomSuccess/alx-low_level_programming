#include "main.h"

/**
<<<<<<< HEAD
 * print_diagonal - draws diagonal line
 * @n: number of times
 *
 * Return: void
=======
 * print_diagonal- multiplies two numbers
 * @n: accepts an integer
 * Description: program will assign a random number to the variable n each time
 * it is executed.
 *
 * Return: returns the answer
>>>>>>> 93b8dfe121f33feec0413fc37e2c70a71faa8cdc
 */

void print_diagonal(int n)
{
	int line = 0;
	int spaces;

	if (n > 0)
	{
		while (line < n)
		{
			for (spaces = 0; spaces < line; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			line++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
