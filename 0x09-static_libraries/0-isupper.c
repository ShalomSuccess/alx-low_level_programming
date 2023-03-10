#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: character to checked
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

