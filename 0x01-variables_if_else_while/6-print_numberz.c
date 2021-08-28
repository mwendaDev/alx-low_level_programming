#include <stdio.h>
/**
*main -entry point
*Return: 0 if executed
*/
int main(void)
{
long i;
for (i = 0; i < 10; i++)
{
if ((i == 0) || (i%10 + '0'))
{
putchar(('0') || (i%10 + '0'));
}
}
putchar('\n');
return (0);
}
