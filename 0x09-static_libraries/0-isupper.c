#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: character to checked for case
 *
 * Return: 1 if uppercase, 0 if not uppercase
=======
#include <ctype.h>
#include <stdio.h>


 * _isupper- determine if a character is upper
 *@c: accepts an integer
 * Description: program will assign a random number to the variable n each time
 * it is executed.
 *
 * Return: Always 0 (Success)
>>>>>>> 93b8dfe121f33feec0413fc37e2c70a71faa8cdc
 */
 
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
	return (0);
}

