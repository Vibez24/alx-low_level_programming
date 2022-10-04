#include "main.h"
#include <stddef.h>

/**
 * _strlen - Returns the length of a string.
 * @str: string.
 *
 * Return: Length.
 */
int _strlen(char *s __attribute__((__unused__)))
{
	size_t len = 0;
	int *str;

	while (*str++)
		len++;

	return (len);
}
