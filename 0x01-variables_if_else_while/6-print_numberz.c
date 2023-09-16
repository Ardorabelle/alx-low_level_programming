#include <stdio.h>
/**
 *main - this is the main function
 *main - this will print all single digit numbers of base 10 starting from 0
 *Return: 0
*/

int main(void)
{
	int i = 1;
	/*prints single digitbase 10 numbers*/
	int digits = (47);

	while (digits < 57)
	{
		digits = digits + i;
		putchar(digits);
	}
	putchar(10);
	return (0);
}
