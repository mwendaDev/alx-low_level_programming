#include "main.h"
/**
*print_rev - func to reverse print
*@s: string
*/
void print_rev(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
}
for (i -= 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
