#include <stdio.h>
/**
*main - entry point
*Return: 0 if executed
*/
int main(void)
{
char ch;
if ((ch != 'q') && (ch != 'e'))
{
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
