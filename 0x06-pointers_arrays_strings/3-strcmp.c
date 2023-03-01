#include "main.h"

/**
 * _strcmp - This function compares two strings
 * @s1: Pointer to string 1
 * @s2: Pointer to string 2
 * Return: Results
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
