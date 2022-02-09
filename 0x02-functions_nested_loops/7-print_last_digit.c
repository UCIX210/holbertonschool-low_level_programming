#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - ultomo digito absoluto
 *
 * Return: Always n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = abs(n);
	}
    n = n % 10;
	return (n);
}
