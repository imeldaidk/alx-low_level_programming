#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0
*/

int main(void)
{
		int i;
		char f;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (f = 'a' ; f <= 'f' ; f++)
		putchar(f);
	putchar('\n');
	return (0);
}
