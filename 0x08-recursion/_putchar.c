#include <unistd.h>
/**
 * _putchar -writes the charachter c to std out
 * @c - the ccharachter to print 
 *
 * Return: on success 1.
 * On error -1 is returned
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
