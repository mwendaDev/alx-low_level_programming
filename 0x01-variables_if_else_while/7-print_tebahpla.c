#include <stdio>
/**
*main - entry point
*Return: 0 if executed
*/
int main(void)
{
char ch;
for (ch = 'z'; ch == 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
