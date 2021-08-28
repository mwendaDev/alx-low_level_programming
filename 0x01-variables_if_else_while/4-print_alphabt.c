#include <stdio.h>
/**
*main - entry point
*Return: 0 if executed
*/
int main(void)
{
char ch;
ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
if ((ch != 'q') && (ch != 'e'))
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
