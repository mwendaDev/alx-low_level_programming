#include "main.h"
/**
*_isupper - function to check if input is uppercase char
*@c: character to be checked
*Return: on success 1
*/
int _isupper(int c)
{
int i;
for (i = 65; i < 91; i++)
{
if (c == i)
return (1);
}
return (0);
}
