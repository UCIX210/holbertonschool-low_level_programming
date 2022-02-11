#include "main.h"
/**
 * _isdigit - minuscula
 * @c: variable a chequear
 * Return: 0 == Mayuscula 1==minuscula
 */
int _isdigit(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
