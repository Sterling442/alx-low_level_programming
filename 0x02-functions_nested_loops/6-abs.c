#include "main.h"

/**
 * _abs - This func computes the absolute value of an integer
 * @c: Test character
 * Return: Absolute or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
