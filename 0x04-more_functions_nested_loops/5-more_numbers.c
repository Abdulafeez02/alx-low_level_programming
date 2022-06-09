#include "main.h"

/**
 * more_numbers - prints numbers
 *Return: 0
 */

void more_numbers(void)
{
	int num = 0;
	int counter;

	for (counter =1; counter <=10; counter++)
	{
		while (num < 15)
		{
			_putchar(num);
			num++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
