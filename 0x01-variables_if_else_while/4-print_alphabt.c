#include <stdio.h>
/**
*main - entry point
*Return: 0 if executed
*/
int main(void)
{
char ch;
ch = 'a';
for (ch <= 'z')
{
putchar(ch);
if ((ch != 'q') && (ch != 'e'))
}
putchar('\n');
return (0);
}
