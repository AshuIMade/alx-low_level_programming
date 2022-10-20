#include "main.h"

/**
 * print_numbers - prins numbers from 0 - 9
 * Return: 0
 */

int print_numbers(void)
{
	for(int i=0; i < 10; i++)
	{
		putchar("%d",i);
	}
	putchar('\n');

	return (0);
}
