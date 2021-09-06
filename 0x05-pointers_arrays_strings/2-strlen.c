#include "main.h"
/**
*_strlen - function to find string length
*@s: pointer
*Return: number of characters
*/
int _strlen(char *s)
{
int len = 0;
while (s[len])
len++;

return (len);

}
