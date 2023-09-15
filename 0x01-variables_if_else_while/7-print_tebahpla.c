#include <stdio.h>
/**
 *main - this is the main function
 *main - this will  print the lowercase alphabet in reverse
 *Return: 0
*/

int main(void)
{
	int i = 1;
	int digits = (123);

	/*condition to print letters backwards*/
	while (digits > 97)
	{
		digits = digits - i;
		putchar(digits);
	}
	putchar(10);
	return (0);
}
