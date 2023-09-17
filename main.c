#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}



/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
_printf("%s", "This sentence is retrieved from va_args!\n");
return (0);

}
