#include <stdio.h>
/**
*main - entry point;
*Return: 0 if executed successfully
*/
int main(void)
{
int i;
int j;
for (i = 0; i < 9; i++)
for (j = 1; j < 10; i++)
{
{
if ((i == j) || (j == i) || (i > j))
continue;
putchar(i % 10 + '0');
putchar(j % 10 + '0');
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
} 
