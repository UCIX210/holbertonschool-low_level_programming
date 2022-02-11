#include "main.h"
/**
 * _isdigit - Devuleve 1 si es digito
 * @c: variable a chequear
 * Return: 1 == Digito
 */
int _isdigit(int c)
{
	if (c >= '1' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
