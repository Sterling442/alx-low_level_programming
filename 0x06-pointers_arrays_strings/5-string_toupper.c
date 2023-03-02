#include "main.h"

/**
 * string_toupper - This functions changes all lower case to upper case
 * @str: string for test
 * Return: Pointer to the string changed
 */

char *string_toupper(char *str)

{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] = str[index] - 32;
		index++;
	}

	return (str);
}
