#include "main.h"
/**
*print_to_98 - function to print to 98
*@n: origin number
*/
void print_to_98(int n)
{
int i;
for (i = n; i <= 98; i++)
{
_putchar(i + '0');
_putchar(',');
_putchar(' ');
}
}
