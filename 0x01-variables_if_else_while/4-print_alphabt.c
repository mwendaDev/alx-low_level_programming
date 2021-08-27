#include <stdio.h>
/**
*main - entry point
*Return: 0 if executed
*/
int main(void)
{
char ch;
ch = 'a';
do(ch <= 'z') {
putchar(ch);
} while (ch != 'q' || 'e');
putchar('\n');
return (0);
}
