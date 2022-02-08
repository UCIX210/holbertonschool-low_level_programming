#include <stdio.h>
/**
 * main - print alphabet
 *
 * Return: 0 Always
 */
int main(void)
{
    int i;
    char c;

    for (i = 0; i <= 9; i++)
    {

        for (c = 'a'; c < 'z'; c++)
        {
            putchar(c);
        }
        putchar('\n');
    }
    
}
