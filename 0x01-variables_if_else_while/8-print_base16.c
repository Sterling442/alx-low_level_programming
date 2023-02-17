#include <stdio.h>
/**
 * main - This program prints all the numbers of base sixteen
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char c;

	int d;

	c = 'a';
	d = 0;
	while
		(d < 10) {
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f') {
			putchar(c);
				c++;
		}
	putchar('\n');
	return (0);
}
