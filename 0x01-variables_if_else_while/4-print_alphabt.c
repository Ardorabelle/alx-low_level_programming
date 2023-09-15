#include <stdio.h>

/**
 * main - this is the main function
 * main - this will  print the alphabet in lowercase, and then in uppercase, followed by a new line
 *
 *Return: 0
*/

int main(void)
{
	int i = 1;
	int digits = (96);
	while (digits < 100)
	{
		digits = digits + i;
		putchar(digits);
	}
	digits = (101);
	while (digits < 112)
	{
		digits = digits + i;
		putchar(digits);
	}
	digits = (113);
	while (digits < 122)
	{
		digits = digits + i;
		putchar(digits);
	}
	return (0);

}
