#include <stdio.h>


/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 *
 * Description: Prints an integer using only _putchar function
 * Return: void
 */
void print_number(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    if (n / 10 != 0) {
        print_number(n / 10);
    }

    _putchar(n % 10 + '0');
}
