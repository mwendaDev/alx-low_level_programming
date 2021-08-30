#include <stdio.h>
/**
*main - entry point
*Return: 0 if executed successfully
*/
int main(void)
{
int i;
int j;
int k;
for (i = 0; i < 8; i++)
for (j = 1; j < 9; j++)
for (k = 2; k < 10; k++)
{
{
{
if ((i == k) || (i == j) || (j == k))
continue;
if ((i > j) || (i > k) || (j > k))
continue;
putchar(i % 10 + '0');
putchar(j % 10 + '0');
putchar(k % 10 + '0');
if ((i == 7) && (j == 8) && (k == 9))
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
