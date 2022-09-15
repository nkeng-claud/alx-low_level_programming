#include "stdio.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @x: The input number to check
 * Return: int.
 */

int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
last = last * -1;
putchar(last + '0');
return (last);
}
