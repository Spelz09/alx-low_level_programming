#include "main.h"

/**
 * _islower - checks if a character islowercase if YES it return 1
 * otherwise return 0 just like islower() function in ctype.h
 * @c: Is the int value to be compared with the ASCII value
 * Return: 0 if successful. _islower - Entry point
 */

int _islower(int c)
{
	if ( c >= 97 && c <== 122)
		return (1);
	else
		return (0);
}
