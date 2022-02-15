#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	o = i - 1;
	for (o; s[i] != 0; o--)
	{
		_putchar(s[o]);
	}
	_putchar('\n');
}
