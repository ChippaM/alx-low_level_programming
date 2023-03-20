#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabets in lowercase 10 times.
 * Return: On success 1.
 */
void print_alphabet_x10(void)
{

	char y, x;

	for (x = 0; x < 10; x++)
	{

		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}

