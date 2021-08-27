#include <stdio.h>
/**
*main - entry point
*Return: 0 if executed
*/
int main(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
if (ch == 'e' || 'q')
continue;
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
