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
	/*prints letters before 'e'*/
	while (digits < 100)
	{
		digits = digits + i;
		putchar(digits);
	}
	/*declaration of variable of value 'e'*/
	digits = (101);
	/*prints letters after 'e' and before 'q'*/
	while (digits < 112)
	{
		digits = digits + i;
		putchar(digits);
	}
	/*declaration of variable of value 'q'*/
	digits = (113);
	/*prints letters after 'q'*/
	while (digits < 122)
	{
		digits = digits + i;
		putchar(digits);
	}
	putchar(10);
	return (0);

}
