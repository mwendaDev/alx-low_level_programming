#include "main.h"
/**
*print_alphabet - function to print alphabet
*Return: if executed successfully
*/
void print_alphabet(void)
{
char c[26] = ['a'-'z'];
int i;
for (i = 0; i <= 26; i++)
{
_putchar(c);
}
_putchar('\n');
}

