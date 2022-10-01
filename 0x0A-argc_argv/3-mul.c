#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name, followed by a new line
 *
 * @argc : counts arguments inputed in terminal
 * @argv : argument vector
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{
	int result, num1;
	int num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
