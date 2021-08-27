#include <stdio.h>
/**
*main - entry point
*Return: 0 if executed
*/
int main(void)
{
char ch;
ch = 'a';
if (ch != 'q' || 'e')
{
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
}
