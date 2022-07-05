#include "main.h"
/**
 * A program that prints _putchar
 *
 * Returns 0 upon completion
 */
int main(void)
{
	char c;
	char str[]="_putchar";
	int i;

	for (i=0; i<strlen(str); i++)
	{
		c=str[i];
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
