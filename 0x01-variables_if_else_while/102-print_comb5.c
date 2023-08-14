#include <stdio.h>
/**
 * main - main function
 * Description: Prints possible combination of 2 digit numbers
 * Return: Always 0
 */

int main(void)
{
	int l, m, n;

	for (l = 0; l <= 7; l++)
		putchar(l + '0');
	for (m = l + 1; m <= 8; m++)
		putchar(m + '0');
	for (n = m + 1; n <= 9; n++)
		putchar(n + '0');
	if (l != 7 || m != 8 || n != 9)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
