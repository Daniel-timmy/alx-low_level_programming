#include "main.h"
 /**
  * print_line - prints straight line
  * @n: times straight line is printed.
  * Return: no return.
  */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar(95);
	}
	_putchar('\n');
}
