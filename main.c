#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
_printf("Let's print a simple sentence.\n");
_printf("%c", 'S');
_putchar('\n');
_printf("A char inside a sentence: %c. Did it work?\n", 'F');
_printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
_printf("%s", "This sentence is retrieved from va_args!\n");
return (0);

}
