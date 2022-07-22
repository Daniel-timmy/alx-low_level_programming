#include <stdio.h>
/**
 * main - prints the number of arguments passed into the function
 * @argc: the number of argume passed
 * @argv: an array of the arguments passed
 *
 * Return: returns 0 on completion
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc - 1);
	return (0);
}
