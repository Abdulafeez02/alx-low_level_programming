#include "main.h"

/**
 * print_most_numbers - prints task
 * Return: nothing
 */

void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num != 2 && num != 4)
			_putchar(num);
		else
			continue;
	}
}
