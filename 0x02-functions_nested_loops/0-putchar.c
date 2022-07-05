#include "main.h"
#include <string.h>
/**
 * A program that prints _putchar
 *
 * Returns 0 upon completion
 */
int main(void)
{
	char c;
	char str[]="_putchar";
	int i, cnt;

	cnt= strlen(str);
	for (i=0; i<cnt; i++)
	{
		c=str[i];
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
