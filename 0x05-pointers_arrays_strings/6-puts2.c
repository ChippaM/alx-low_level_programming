#include "main.h"
/**
*  function prints every other character of a string, starting with the first character, followed by a new line.
*/

void puts2(char *str)
{
	int x = 0, y;

	while (str[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y += 2)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
