#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to string
 *
 * Return: number of character it printed
 */

int _puts(char *str)
{
        int i;

        i = 0;

        while (str[i] != '\0')
        {
                _putchar(str[i]);
                i++;
        }
        return (i);
}
