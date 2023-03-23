#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to process
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
    int last_digit;

    if (n < 0)  /* If the number is negative, make it positive */
        n = -n;

    last_digit = n % 10;  /* Get the last digit */

    _putchar(last_digit + '0');  /* Print the last digit */

    return last_digit;
}

