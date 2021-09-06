#include "main.h"
/**
*_strlen - function to find string length
*@s: pointer
*Return: number of characters
*/
int _strlen(char *s)
{
int x = 0;
while (*s != '\0')
{
x++;
*s++;
}
return (x);
}
