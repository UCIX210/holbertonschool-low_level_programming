#include "main.h"
/**
 * _isalpha - letra
 * @c: variable a chequear
 * Return:  1==letra else - 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
