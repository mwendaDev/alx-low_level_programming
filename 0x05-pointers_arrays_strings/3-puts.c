#include "main.h"
/**
*_puts - func
*@str: pointer
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
*str++;
}
}
