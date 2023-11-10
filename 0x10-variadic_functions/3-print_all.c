#include "variadic_functions.h"


/**
 * print_all - print any argument provided to
 * @format: the argument given based on format specifier
 *
 * Return: any argument given based on format specifier
 */

void print_all(const char * const format, ...)
{
	int i, check_stat;

	char *str;
	va_list spc;

	va_star(spc, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(spc, int));
				check_stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(spc, int));
				check_stat = 0;
				break;
		}
		i++;
	}
}
