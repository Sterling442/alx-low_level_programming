#include <stdio.h>
/**
 * main - This program prints all letters except q and e in lower case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
