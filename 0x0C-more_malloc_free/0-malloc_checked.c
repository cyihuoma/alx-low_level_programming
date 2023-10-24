#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: int parameter to memory
 *
 * Return: 98
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
