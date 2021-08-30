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
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of a int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(llIntType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
