#include "main.h"

/**
 * _isdigit - This func checks for a digit
 * @x: character to be checked
 * Return: 1 for a digit or 0 forr any other
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
