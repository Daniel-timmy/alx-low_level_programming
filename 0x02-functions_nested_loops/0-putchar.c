#include "main.h"
#include <string.h>
/**
 * main - Prints _putchar as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char str[] = "_putchar";
	int i, cnt;

	cnt = strlen(str);
	for (i = 0; i < cnt; i++)
	{
		c = str[i];
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
