/*
 * main - Entry point
 * File: 1-alphabet.c
 * Return: void
 */

#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char alpha;
	
	for (alpha = 'a'; alpha <= 'z'; alpha++);
	
	_putchar(alpha);
	_putchar('\n');
}
