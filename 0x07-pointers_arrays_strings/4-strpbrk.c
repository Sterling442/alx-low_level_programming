#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - This func. searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: Always 0 (Succes)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; n++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
		if (s[i] == accept[n])
		return (s + i);
		}
	}
	return (NULL);
}
