#include <stdio.h>
#include <stdlib.h>
/**
 * main - min number of cambio change
 * @argc: argv length
 * @argv: centavos
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int i;
	int cambio = 0;
	int suma = 0;
	int centavos[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; centavos[i] != '\0'; i++)
	{
		while (suma + centavos[i] <= atoi(argv[1]))
		{
			suma += centavos[i];
			cambio++;
		}
	}
	printf("%d\n", cambio);
	return (0);
}
