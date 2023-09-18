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
int len;
int len2;
unsigned int ui;

ui = (unsigned int)INT_MAX + 1024;


len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
_printf("Negative:[%d]\n", -762534);
printf("Negative:[%d]\n", -762534);

_printf("Unsigned:[%u]\n", ui);
printf("Unsigned:[%u]\n", ui);
_printf("Unsigned octal:[%o]\n", ui);
printf("Unsigned octal:[%o]\n", ui);

_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);
_printf("Unknown:[%r]\n");
_printf("A char inside a sentence: %c. Did it work?\n", 'F');
_printf("Let'see if the cast is corretly done: %c. Did it work?\n", 48);
printf("Let'see if the cast is corretly done: %c. Did it work?\n", 48);
_printf("%!\n");

_printf("%");
_printf(NULL);
_printf("%c",'\0');



return (0);
}
