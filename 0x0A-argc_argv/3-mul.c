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
	int a;
	int b = atoi(argv[1]);
		if (argc == 3)
		{
			a = b * atoi(argv[2]);
			printf("%d\n", a);
			return (0);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
}
