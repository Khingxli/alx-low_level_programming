#include "main.h"

/**
* _puts - prints a string, followed by a new line.
* @str: input string.
* Return: no return.
*/
void _puts(char *str)
{
for (; *str != '\0'; str++)
{_putchar(*str);
}
_putchar('\0')
}
