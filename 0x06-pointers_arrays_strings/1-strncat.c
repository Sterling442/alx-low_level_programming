#include "main.h"

/**
 * _strncat - This func. cocatenates 2 strings
 * @dest: Destination
 * @src: Source
 * @n: number for test
 * Return: Results
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
