#include "main.h"
/**
*_isalpha - function to check for uppercase character
*@c: character to print
*Return: on success 1
*/
int _isalpha(int c)
{
int i;
int j;
for (i = 65; i <= 122; i++)
{
if ((c == 67) || (c == 99) || (i == c))
return (1);
}
return (0);
}
