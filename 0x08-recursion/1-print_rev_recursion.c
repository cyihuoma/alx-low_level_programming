#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: pointer to parameter
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	printf("%c", *s);
}
