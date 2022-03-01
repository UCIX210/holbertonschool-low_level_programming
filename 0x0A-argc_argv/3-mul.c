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
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int c = a * b;

		printf("%d \n", c);
	}
	else
	{
		printf("Error \n");
		return (1);
	}
	return (0);
}
