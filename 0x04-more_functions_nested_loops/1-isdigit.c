#include "main.h"
/**
*_isdigit - function to check digit 0 to 9
*@c: digit to check
*Return: on success 1
*/
int _isdigit(int c)
{
int k;
for (k = 48; k <= 57; k++)
{
if (c == k)
return (1);
}
return (0);
}
