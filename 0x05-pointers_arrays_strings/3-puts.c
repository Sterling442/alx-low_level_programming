#include "main.h"

/**
 * _puts - this func. prints a string in reverse
 * @str: strin input
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
