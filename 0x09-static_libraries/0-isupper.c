#include "main.h"

/**
 * _isupper - function that checks upper case character
 * @c: function parameter
 * Return: 1 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
