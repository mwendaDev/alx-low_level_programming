#include "main.h"
/**
*print_sign - function to print a sign
*@n: reference integer
*Return: on success 1
*/
int print_sign(int n)
{
int i = 43;
int j = 45;
int k = 48;
if (n > 0)
{
_putchar(i);
return (1);
}
else if (n == 0)
{
_putchar(k);
return (0);
}
else
{
_putchar(45);
return (-1);
}
return (1);
}
