#include "main.h"

/**
 * print_numbers - prins numbers from 0 - 9
 * Return: 0
 */

int print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}
