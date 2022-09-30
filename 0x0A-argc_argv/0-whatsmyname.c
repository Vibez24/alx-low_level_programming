#include <stdio.h>

/**
 *main - A program to print its name
 * @argc:argument counter
 * @argv:argument vector
 * Return: 0 - success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s", argv[0]);
	return (0);
}
