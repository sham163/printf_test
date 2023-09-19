#include "main.h"


/**
* Description: _strlen - a function that returns the length of a string.
*
* @s: string parameter
*
* Return: length the length of string
*/

int _strlen(char *s)
{
int i = 0;
int length = 0;


while (s[i] != '\0')
{
length += 1;
i++;
}
return (length);
}
