#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - wrints the alphabet, in lowercase
 *
 * Return: 0 Always
 */
int main(void)
{
    char i;

    for (i = 'a'; i < 'z'; i++)
    {
        putchar(i);
    }
    putchar('\n');

}
