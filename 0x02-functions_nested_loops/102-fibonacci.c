#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers, starting with 1 and 2,
 * 	  seperated by a comma followed by a space.
 *
 * 	  Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (coount = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
