#include "main.h"


/**
 *_puts_recursion this function prints strings recursively
 *@s : string parameter
 */

void _puts_recursion(char *s)

{
	s = "rec\0";
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
