#include "main.h"
/**
*print_to_98 - function to print to 98
*@n: origin number
*/
void print_to_98(int n)
{
int i = n;
while (i <= 98)
{
_putchar(i + '0');
_putchar(',');
_putchar(' ');
i++;
}
}
