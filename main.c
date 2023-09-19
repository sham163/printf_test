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
int _len;
int _len2;
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

_printf("empty Character:[%c]\n", ' ');
printf("empty Character:[%c]\n", ' ');
_printf("empty Character:[%c]\n", ' ');
printf("empty Character:[%c]\n", ' ');
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
printf("String:[%s %s]\n", "I am a string !", "second string !");
_printf("%b\n", 98);

_len = 0;
_len2 = 0;

_len = printf("String:[%s%s]\n", "I am a string !", "second string !");
_len2 = _printf("String:[%s%s]\n", "I am a string !", "second string !");
printf("Length:[%d, %i]\n", _len, _len2);

_len = _printf("Number: %d, %i\n", 4034, 4034);
_len2 = printf("Number: %d, %i\n", 4034, 4034);
printf("Len:[%d]\n", _len);
printf("Lelen:[%d]\n\n", _len2);

_len = _printf("Negative: %i, %d\n", -4034, -4034);
_len2 = printf("Negative: %i, %d\n", -4034, -4034);
printf("Len:[%d]\n", _len);
printf("Lelen:[%d]\n\n", _len2);

_len = _printf("NULL: %i\n", NULL);
printf("Len:[%d]\n", _len);
printf("Lelen:[%d]\n\n", _len2);

_len = _printf("%d\n", INT_MAX);
_len2 = printf("%d\n", INT_MAX);
printf("Len:[%d]\n", _len);
printf("Lelen:[%d]\n\n", _len2);

_len = _printf("%d\n", INT_MIN);
_len2 = printf("%d\n", INT_MIN);
printf("Len:[%d]\n", _len);
printf("Lelen:[%d]\n\n", _len2);

_len = _printf("\nNumber: [%d], [%i]\n", 4034, 4034);
_len2 = printf("Number: [%d], [%i]\n", 4034, 4034);
printf("Len:[%d]\n", _len);
printf("Lelen:[%d]\n\n", _len2);

_len = _printf("Negative: [%i], [%d]\n", -4034, -4034);
_len2 = printf("Negative: [%i], [%d]\n", -4034, -4034);
printf("Len:[%d]\n", _len);
printf("Lelen:[%d]\n\n", _len2);

printf("Len:[%d]\n", _len);
printf("Lelen:[%d]\n\n", _len2);

printf("Len:[%d]\n", _len);
printf("Lelen:[%d]\n\n", _len2);
printf("Len:[%d]\n", _len);
printf("Lelen:[%d]\n\n", _len2);

printf("Len:[%d]\n", _len);

printf("Lelen:[%d]\n\n", _len2);

printf("Len:[%d]\n", _len);
printf("Lelen:[%d]\n\n", _len2);

printf("Len:[%d]\n", _len);
printf("Lelen:[%d]\n\n", _len2);

_len = _printf("[%d]\n", INT_MAX);
_len2 = printf("[%d]\n", INT_MAX);
printf("Len:[%d]\n", _len);
printf("Lelen:[%d]\n\n", _len2);

_len = _printf("[%d]\n", INT_MIN);
_len2 = printf("[%d]\n", INT_MIN);
printf("Len:[%d]\n", _len);
printf("Lelen:[%d]\n\n", _len2);






return (0);
}
