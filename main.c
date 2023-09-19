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
int ls = _printf("%s"," gggggggggggggggggggggggg");
int l2 = printf("%s"," gggggggggggggggggggggggg");

printf("%d", ls);
_putchar('\n');
printf("%d", l2);
_putchar('\n');

_printf("Let's try to printf a simple sentence.\n");
printf("Let's try to printf a simple sentence.\n");

_printf("empty Character:[%c]\n", ' ');
printf("empty Character:[%c]\n", ' ');
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("Character:[%c%c]\n", 'H', 'I');
printf("Character:[%c%c]\n", 'H', 'I');
_printf("Character:[%c%c%c]\n", 'H', 'I', '!');
printf("Character:[%c%c%c]\n", 'H', 'I', '!');

_printf("Character:[%c %c %c]\n", 'H', 'I', '!');
printf("Character:[%c %c %c]\n", 'H', 'I', '!');
_printf("Two c with Space:[%c %c]\n", 'H', 'I');
printf("Two c with Space:[%c %c]\n", 'H', 'I');
_printf("empty String:[%s]\n", "");
printf("empty String:[%s]\n", "");
_printf("Space String:[%s]\n", " ");
printf("Space String:[%s]\n", " ");
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
_printf("String:[%s%s]\n", "I am a string !", "second string !");

_printf("String:[%s%s]\n", "I am a string !", "second string !");
printf("String:[%s%s]\n", "I am a string !", "second string !");
_printf("%%");

return (0);
}
