#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
<<<<<<< HEAD
 * @a: first int
 * @b: second int
 * @c: third int
=======
 * @a: first integer
 * @b: second integer
 * @c: third integer
>>>>>>> 93b8dfe121f33feec0413fc37e2c70a71faa8cdc
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
<<<<<<< HEAD
	int largest = b;

	if (a > b)
	{
		largest = a;
	}
	else if (c > b)
=======
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
>>>>>>> 93b8dfe121f33feec0413fc37e2c70a71faa8cdc
	{
		largest = c;
	}

	return (largest);
}
