#include "main.h"
/**
*_islower - function to check for lowercase character
*@c: character to print
*Return: on success 1
*/
int _islower(int c)
{
int i;
for (i = 97; i <= 122; i++)
{
if ((c == 99) || (i == c))
return (1);
}
return (0);
}
