#include <stdio.h>
/**
*main - entry point
*Return: 0 if executed successfullyi
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i % 10 + '0');
if (i == 9)
continue;
putchar(",");
putchar(" ");
}
putchar('\n');
return (0);
}
