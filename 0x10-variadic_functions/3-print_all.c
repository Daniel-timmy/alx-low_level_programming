#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	char *str;
	unsigned int cnt1 = 0, cnt2 = 0, cnt3 = 0;

	while (format[cnt2] != '\0')
	{
		switch (format[cnt2])
		{
		case 'c':
			cnt1++;
			break;
		case 'i':
			cnt1++;
			break;
		case 'f':
			cnt1++;
			break;
		case 's':
			cnt1++;
			break;
		}
		cnt2++;
	}
	va_start(valist, format);

	while (format[cnt3])
	{
		switch (format[cnt3])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%d", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			str = va_arg(valist, char *);
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		default:
			break;
		}
		if (cnt3 < (cnt2 - 1) && (format[cnt3] == 'c' || format[cnt3] == 'i' || format[cnt3] == 'f' || format[cnt3] == 's'))
			printf(", ");
		cnt3++;
	}

	printf("\n");
	va_end(valist);
}
