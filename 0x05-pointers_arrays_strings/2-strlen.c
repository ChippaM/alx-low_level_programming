#include "main.h"

/*
*function returns the length of a string.  
* _strlen - Returns the length of a string
*/
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

