#include "main.h"
/**
*print_rev - func to reverse print
*@s: string
*/
void print_rev(char *s)
{
*s = '\0'--;
while (*s != '\0')
{
_putchar(*s);
}
_putchar('\n');
}
