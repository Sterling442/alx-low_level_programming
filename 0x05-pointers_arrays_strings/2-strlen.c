#include <stdio.h>

/**
 * _strlen - This func. returns the length of a string.
 * @str: String for test
 * Return: Length of string
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
