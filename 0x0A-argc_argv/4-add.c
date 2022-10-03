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
        int result = 0 , num, i, j, k;

	if (argc == 1)
		printf("0\n");

	for (i = 0; i < argc; i++)
	{
		for (j = 0; agrv[i][j] !='\0'; j++)
		{
			printf("%S\n", "Error");
			return (1);
		}
	}
	
	for (k = 0; k < argc; k++)
	{
		num = atoi(argv[k]);
		result += num;

	}
	printf("%d\n", result);
	return (0);
}
