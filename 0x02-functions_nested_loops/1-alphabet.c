#include "main.h"
/**
*main - entry point
*Return: 0 if executed successfully
*/
int main(void)
{
print_alphabet();
_putchar('\n');
return (0);
}
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
return; 
}
