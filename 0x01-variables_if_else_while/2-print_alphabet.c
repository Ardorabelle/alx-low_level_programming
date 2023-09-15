#include <stdio.h>

/**
 *main - this is the main function.
 *main -  this will print the alphabet in lowercase, followed by a new line
 *
 *Return: 0
*/

int main(void)
{
	int i = 1;
	int digits = (96);

	/*condition to print only lowercase alphabets using their ASCII values*/
	while (digits < 122)
	{
		digits = digits + i;
		putchar(digits);
	}
	putchar(10);
	return (0);
}

