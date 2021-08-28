#include <stdio.h>
/**
*main -entry point
*Return: 0 if executed
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
if ((i == 0) || (i % 10 + '0'))
{
putchar('i');
}
}
putchar('\n');
return (0);
}
