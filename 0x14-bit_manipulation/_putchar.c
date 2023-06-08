#include "main.h"
#include <unistd.h>
/**
 * _putchar - function that writes c to stdout
 * @c: Function to print
 *
 * Return: 1 on successful
 * If error, -1 returns
 */
int_putchar(char c)
{
	return (write(1, &c, 1));
}
