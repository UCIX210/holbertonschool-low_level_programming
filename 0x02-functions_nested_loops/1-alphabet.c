#include "main.h"
/**
 * main - wrints the alphabet, in lowercase
 *
 * Return: 0 Always
 */
void print_alphabet(void)
{   
    char i;

    for (i = 'a'; i <= 'z'; i++)
    {
        _putchar(i);
    }
    _putchar('\n');

}
