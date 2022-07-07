#include <stdio.h>

/**
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0.
 */
int main(void)
{
	int cnt;

	cnt = 1;
	printf("%d", cnt);
	for (cnt = 2; cnt <= 100; cnt++)
	{
		if ((cnt % 3 == 0) && (cnt % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (cnt % 3 == 0)
		{
			printf("Fizz");
		}
		else if (cnt % 5 == 0)
		{
			printf("Buzz");
		}
		else 
			printf("%d", cnt);
		printf(" ");
	}
	printf("\n");
	return (0);
}
