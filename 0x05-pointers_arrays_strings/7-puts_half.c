#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i;
	int o;
	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	if (i % 2 != 0)
	{
		o = (i + 2) / 2;
	}
	else
	{
		o = (i + 1) / 2;
	}
	for (o;str[o] != 0; o++)
	{
		_putchar(str[o]);
	}
	_putchar('\n');
}
