#include <unistd.h>

/**
 * _putchar -writes character c to stdout
 * @c: char ro be printed 
 * Return: on success 1
 */
int _ putchar(char c)
{
	return (write(1, &c, 1));
}
