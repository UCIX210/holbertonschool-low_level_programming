#include "main.h"
#include <stdio.h>
/**
  * print_square - prints a square
  * @size: caudaro nuemros
  * Return: void
  */
void print_square(int size)
{
	int i;
	int j;
	int array[size];

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				array[i] = '#';
			}
			for (i = 0; i < size; i++)
			{
				_putchar(array[i]);
			}
			_putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}

