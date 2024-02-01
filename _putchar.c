#include "main.h"

/**
 * _putchar - writes the c character to stdout
 * @c: Character to print
 *
 * Return: If successful 1.
 * On failure, returns -1, and errno is set accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
