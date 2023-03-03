#include "main.h"

/**
<<<<<<< HEAD
 * more_numbers - prints numbers 0-14 ten times
 *
 * Return: void
=======
 * more_numbers- mprints more numbers
 * Description: program will assign a random number to the variable n each time
 * it is executed.
 *
 * Return: returns the answer
>>>>>>> 93b8dfe121f33feec0413fc37e2c70a71faa8cdc
 */

void more_numbers(void)
{
	int line, n, repeat, limit;

	n = '0';
	repeat = 0;
	limit = '9';

	for (line = 0; line < 10; line++)
	{
		while (repeat < 2)
		{
			while (n <= limit)
			{
				if (limit == '4')
					_putchar('1');
				_putchar(n);
				n++;
			}
			repeat++;
			limit = '4';
			n = '0';
		}
		_putchar('\n');
		repeat = 0;
		n = '0';
		limit = '9';
	}
}
