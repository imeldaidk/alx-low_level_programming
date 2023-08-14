#include <stdio.h>
/**
 * main - main function
 * Description: Prints two possible combinations
 * Return: Always 0
 */

int main(void)
{
	int i;
	int n;

	for (i = 0; i <= 8; i++)
	for (n = i + 1; n <= 9; n++)
	{
		putchar(i + '0');
		putchar(n + '0');
	}
	if (i != 8 || n != 9)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
