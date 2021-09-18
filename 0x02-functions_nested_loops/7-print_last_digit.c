#include "main.h"
/**
*print_last_digit - function to print
*@n: digit to print
*Return: on success n
*/
int print_last_digit(int n)
{
n = (n % 10);
return (n);
_putchar(n + '0');
}
