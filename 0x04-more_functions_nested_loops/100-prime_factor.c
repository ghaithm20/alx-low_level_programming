#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Description: Finds the largest prime factor of a number
 * Return: Always 0
 */
int main(void)
{
    unsigned long number = 612852475143;
    unsigned long maxPrime = 0;
    unsigned long i = 0;

    /* Divide by 2 until it's odd */
    while (number % 2 == 0)
    {
        maxPrime = 2;
        number /= 2;
    }

    /* Check odd factors starting from 3 */
    for (i = 3; i <= sqrt(number); i += 2)
    {
        /* While i is a factor, update maxPrime */
        while (number % i == 0)
        {
            maxPrime = i;
            number /= i;
        }
    }

    /* If remaining number is greater than 2, update maxPrime */
    if (number > 2)
    {
        maxPrime = number;
    }

    /* Print the largest prime factor */
    printf("%lu\n", maxPrime);

    return 0;
}

