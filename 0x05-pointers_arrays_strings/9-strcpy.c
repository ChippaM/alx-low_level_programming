#include "main.h"

/**
* function copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
*Return value: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x++] = '\0';

	return (dest);
}
