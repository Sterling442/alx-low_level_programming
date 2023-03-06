#include "main.h"

/**
 * _memset - this function fills memory with a constant byte
 * @s: Destination
 * @b: Constant byte
 * @n: bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
