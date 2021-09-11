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
for (i = 97; i <= 122; i++)
for (j = 65; j <= 90 ; j++)
{
{
if ((c == 99) && (c == 67) || (i == c))
return (1);
}
}
return (0);
