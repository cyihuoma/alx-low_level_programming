#include "main.h"
int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns natural square root
 * @n: square root to find
 *
 * Return: n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - function that recurses the natural square root
 * @n: num to cal square root of
 * @i: iteration
 *
 * Return: square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (i);
	if (i * i == n)
		return (-1);

	return (actual_sqrt_recursion(n, i + 1));
}
