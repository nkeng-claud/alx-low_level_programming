#include "stdio.h"

/**
 * print_alphabet - function that prints the alphabet, lowercase
 * You can only use _putchar twice in your code
 * Return: nothing.
 */
void print_alphabet(void)
{
int l = 'a';

while (l <= 'z')
{
putchar(l);
l += 1;
}
putchar(10);
}
