#include <stdio.h>
/**
 *main - this is the main function
 *main - prints all the numbers of base 16 in lowercase
 *Return: 0
*/

int main(void)
{
	int i = 1;
	/*declaring variable for char before first num*/
	int digits = (47);

	/*condition to print first 10 nums*/
	while (digits < (57))
	{
		digits = digits + i;
		putchar(digits);
	}
	/*declaring variable for 11th num*/
	digits = (96);
	/*condition to print remaining nums*/
	while (digits < 102)
	{
		digits = digits + i;
		putchar(digits);
	}
	putchar(10);
	return (0);
}
