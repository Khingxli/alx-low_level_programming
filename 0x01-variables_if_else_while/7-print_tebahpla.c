#include <stdio.h>

/**
* main - Prints alphabets in reverse*
* Return: Always 0 (Success)
*/
int main(void)
{
char alp[26] = "zyxwuvtsrqponmlkjihgfedcba";
int i;

for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
