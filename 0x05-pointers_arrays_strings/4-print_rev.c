#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: input string
 *
 * Return: no return
 */
void print_rev(char *s)
{
	int cnt;

	cnt = 0;
	while (*(s + cnt) != '\0')
		cnt++;
	for (cnt--; cnt >= 0; cnt--)
		_putchar(*(s + cnt));
	_putchar('\n');
}
