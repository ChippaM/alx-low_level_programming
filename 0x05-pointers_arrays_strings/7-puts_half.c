#include "main.h"

/*
*function prints half of a string, followed by a new line.
*/

void puts_half(char *str)
{
	int x = 0, y;

	while (str[x] != '\0')
	{
		x++;
	}
	if (x % 2 != 0)
	{
		y = (x - 1) / 2;
		y += 1;
	}
	else
	{
		y = x / 2;
	}
	for (; y < x; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
