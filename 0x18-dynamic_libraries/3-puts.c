#include "main.h"
/**
 * _puts - function that prints a string,
 *
 * @str: string input
 *
 * Return: no return
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
