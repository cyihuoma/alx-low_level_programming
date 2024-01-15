#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concat an array of strings
 * @ac: number of strings
 * @av: array of strings
 * Return: pointer to the concat string or NULL
 */
char *argstostr(int ac, char **av)
{
	int i, n, total_lenght = 0;
	char *str, *str_ptr;

	if (ac == 0 || av == NULL)

		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			total_lenght++;
		}
		total_lenght++;
	}
	str = malloc(total_lenght * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);

	str_ptr = str;

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			*str_ptr = av[i][n];
			str_ptr++;
		}
		*str_ptr = '\n';
		str_ptr++;
	}
	*str_ptr = '\0';

	return (str);
}
