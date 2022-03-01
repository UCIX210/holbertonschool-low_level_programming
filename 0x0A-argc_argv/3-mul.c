#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication answer on a new line
 * @argc: argc = answer
 * @argv: argv * argv
 *
 * Return: (1)
 */
int main(int argc, char *argv[])
{
	int ab;
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
		if (argc == 3)
		{
			ab = a * b;
			printf("%d\n", ab);
			return (0);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
}
