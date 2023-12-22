#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long long number = 612852475143;
	long long maxPrime = -1;

	while (number % 2 == 0)
	{
		maxPrime = 2;
		number /= 2;
	}

	for (long long i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			maxPrime = i;
			number /= i;
		}
	}

	if (number > 2)
	{
		maxPrime = number;
	}

	printf("%lld\n", maxPrime);

	return (0);
}

