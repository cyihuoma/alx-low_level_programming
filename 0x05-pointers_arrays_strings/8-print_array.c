#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array
 * @a: array executed
 * @n: elements printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
