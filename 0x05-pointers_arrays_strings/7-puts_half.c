#include "main.h"

#include <stdio.h>

/**
 * puts_half - Prints half of a string.
 *
 * @str: The string to be printed.
 */

void puts_half(char *str)

{
	int index = 0, len = 0, n;

	while (str[index++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	if (index = n; index < len; index++)
		putchar(str[index]);
		putchar('\n');
}