#include <stdio.h>

/**
 *main - this is the main function
 * main - this will  prints the alphabet in lowercase, and then in uppercase, followed by a new line
 *
 *Return: 0
*/

int main(void)
{
	/*declaring variable for printing lowercase letters*/
	int i = 1;
	int digits =(96);

	/*conditin to print the lowercase letters using their ascii values*/
	while (digits < 122)
	{
		digits = digits + i;
		putchar(digits);
	}
	/*declaring variable for printing uppercase letters*/
	digits = (64);
	/*condition to print uppercase letters using their ascii values*/
	while (digits < 90)
	{
		digits = digits + i;
		putchar(digits);
	}
	putchar(10);
	return (0);
}
