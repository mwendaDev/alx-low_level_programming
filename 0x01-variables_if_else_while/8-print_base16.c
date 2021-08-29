#include <stdio.h>
/**
*main - entry point
*Return: 0 if executed
*/
int main(void)
{
int i;
char ch;
for (i = 0; i < 10; i++)
{
if ((i == 0) || (i % 10 + '0'))
putchar(i % 10 + '0');
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
}
