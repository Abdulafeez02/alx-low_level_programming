#include "main.h"

/**
 * more_numbers - prints numbers
 * Return: 0
 */

void more_numbers(void)
{
	int num = 0;
	int counter;

	for (counter =1; counter <=10; counter++)
	{
		while (num < 15)
		{
			if (num >= 10)
				_putchar((num / 10) + 48);
			_putchar((num % 10) + 48);
			num++;
		}
		_putchar('\n');
	}
}
