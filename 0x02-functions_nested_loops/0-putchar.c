#include "main.h"

/**
 * print_putchar - prints _putchar followed by a new line
 *
 * Return: 0 on success
 */
int print_putchar(void)
{
    char c;

    c = '_';
    _putchar(c);

    c = 'p';
    _putchar(c);

    c = 'u';
    _putchar(c);

    c = 't';
    _putchar(c);

    c = 'c';
    _putchar(c);

    c = 'h';
    _putchar(c);

    c = 'a';
    _putchar(c);

    c = 'r';
    _putchar(c);

    c = '\n';
    _putchar(c);

    return (0);
}

int _putchar(char c)
{
    return (write(1, &c, 1));
}

