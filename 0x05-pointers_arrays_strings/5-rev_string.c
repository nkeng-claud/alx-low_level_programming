#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 *
 * Return: void:
 */

void rev_string(char *s)
{
int count = 0, i, j;
char *str, temp;

str = s;

while (count >= '\0')
{
if (s[count] == '\0')
	break;
count++;
}

for (i = 0; i < (count - 1); i++)
{
for (j = i + 1; j > 0; j--)
{
temp = *(str + j);
*(str + j) = *(str + (j - 1));
*(str + (j - 1)) = temp;
}
}
}
