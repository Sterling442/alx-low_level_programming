#include "main.h"

/**
 * _islower - This function checks for lower case character
 * @c: The characyer to be checked
 * Return: 0 for lowercase 1 for any other character
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
