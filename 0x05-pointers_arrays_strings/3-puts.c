#include "main.h"
/**
*_puts - func
*@str: pointer
*/
void _puts(char *str)
{
for (*str = 0; *str < '\0'; *str++)
{
_putchar(*str);
}
return (0);
}
