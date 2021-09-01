#include "main.h"
/**
*main - entry point
*Return: 0 if executed successfully
*/
int main(void)
{
print_alphabet();
int i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(print_alphabet[i]);
}
_putchar('\n');
return (0);
}
