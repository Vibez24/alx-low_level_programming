#include <stdio.h>

/**
 * A program that prints its name, followed by a new line.
 * main: a program to print its name
 * @argc: argument counter
 * @argv : argument vector
 * Return: (0) for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s", *argv);
	return (0);
}
