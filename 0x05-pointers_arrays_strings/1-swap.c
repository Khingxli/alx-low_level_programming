#include "main.h"

/**
*void swap_int - swaps the values of two integers
*@a: first integer
*@b: second integer
*Return: returns 0
*/

void swap_int(int *a, int *b)
{
int *a;
int *b;

*a = 98;
*b = 42;

printf("*a=%d, *b=%d\n", *a, *b);
swap_int (&a, &b);

printf("*a=%d, *b=%d\n", *a, *b);

return (0);

}
