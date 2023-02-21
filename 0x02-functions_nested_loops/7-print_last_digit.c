#include "main.h"

/**
 * print_last_digit - This func prints the last digit of number
 * @n: Test number
 * Return: Last digit of number
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
