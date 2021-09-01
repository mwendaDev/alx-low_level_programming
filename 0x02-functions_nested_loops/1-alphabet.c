#include "main.h"
/**
*print_alphabet - function to print alphabet
*Return: 0 if executed successfully
*/
void print_alphabet()
{
char c[26] = "a-z";
int i;
for (i = 0; i <= 26; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}

