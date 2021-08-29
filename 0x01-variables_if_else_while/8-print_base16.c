#include <stdio.h>
/**
*
*
*/
int main(void)
{
int i;
for (i = 0; i < 16; i++)
{
if ((i == 0) || (i % 10 + '0'))
{
putchar(i % 10 + '0');
}
else if ((i >= 10) || (i < 16))
{
i = tolower(i);
putchar(i);
}
}
putchar('\n');
return (0);
}
