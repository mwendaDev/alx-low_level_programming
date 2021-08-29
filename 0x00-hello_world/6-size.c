#include <stdio.h>
/**
*main - entry point
*Return: 0 if executed
*/
int main(void)
{
char charType;
int intType;
long int longIntType;
long long int llIntType;
float floatType;
printf("Size of char: %zu byte(s)\n", sizeof(charType));
printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of long int: %zu byte(s)\n", sizeof(longIntType));
printf("Size of long long int: %zu byte(s)\n", sizeof(llIntType));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
