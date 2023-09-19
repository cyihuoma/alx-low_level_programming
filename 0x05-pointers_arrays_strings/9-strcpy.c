#include "main.h"

/**
 * _strcpy - copy strings pointed by src
 * @dest: value of pointer returned
 * @src: byte to terminate
 * Return: return pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0 ; src[k] != '\0' ; k++)
		dest[k] = src[k];
	dest[k] = '\0';
	return (dest);
}
