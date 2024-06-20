#include "main.h"
int _putchar(char a);
/**
 * print_numbers - Prints the numbers from 0-9.
 */
void print_numbers(void)
{
	int  c;

	for (c = 0; c <= 9; c++)
	{
	
		_putchar(c + '0');
	}
	_putchar('\n');
}
