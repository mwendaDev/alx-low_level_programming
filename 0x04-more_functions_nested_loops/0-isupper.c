#include "main.h"
/**
*_isupper - function to check if input is uppercase char
*@c: character to be checked
*Return: on success 1
*/
int _isupper(int c)
{
int i;
int j;
for (j = 32; j <= 126; j++)
for (i = 65; i <= 90; i++)
{
{
if (c == i)
return (1);
else
return (0);
}
}
return (0);
}
