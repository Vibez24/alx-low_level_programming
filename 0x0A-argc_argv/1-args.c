#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc : counts number of arguments passed
 * @argv : argument vector
 * Return : 0 - success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
