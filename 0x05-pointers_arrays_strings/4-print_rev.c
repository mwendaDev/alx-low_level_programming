#include "main.h"
/**
*print_rev - func to reverse print
*@s: string
*/
void print_rev(char *s)
{
int i= 0;
while (*s != '\0')
{
_putchar(*s[i]);
s--;
}
_putchar('\n');
}
