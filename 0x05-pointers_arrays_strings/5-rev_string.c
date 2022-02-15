#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i, o, l;
	char a;

	i = 0;
	l=0;

	while (s[i] != 0)
	{
		i++;
	}
	o = i - 1;
	for (l; l < i ; l++)
	{
		a = s[l];
		s[l] = s[j];
		s[o--] = a;
	}
}
