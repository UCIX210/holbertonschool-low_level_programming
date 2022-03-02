#include <stdio.h>
#include <stdlib.h>
/**
 * main - minimum number of coins to make change for an amount of money
 * @argc: argv length
 * @argv: array
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int i;
	int cents = 0;
	int suma = 0;
	int monedas[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		for (i = 0; monedas[i] != '\0'; i++)
		{
			while (suma + monedas[i] <= atoi(argv[1]))
			{
				suma += monedas[i];
				cents++;
			}
		}
		printf("%d\n", cents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
