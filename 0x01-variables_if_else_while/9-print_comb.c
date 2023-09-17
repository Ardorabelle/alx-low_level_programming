#include <stdio.h>
/**
 *main - this is the main function
 *main - prints all single digit numbers
 *Return: 0
*/

int main(void)
{
	/*declaring ascii value variable of single digit numbers*/
	int i = 1;
	int digits = (47);

	/*condition to print single digit numbers*/
	while (digits < (58))
	{
		digits = digits + i;
		/*condition to stop printing at 9*/
		if (digits == (58))
			continue;
		/*condition to not print "," and space after 9*/
		putchar(digits);
		if (digits == (57))
			continue;
		putchar(44);
		putchar(32);
	}
	putchar(10);
	return (0);
}
