#include "main.h"
/**
*_puts - func
*@str: pointer
*/
void _puts(char *str)
{
int i
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
