#include <stdio.h>

/**
 * main - this is the main function
 * main - prints the alphabet in lowercase, followed by a new line
 *
 *Return: 0
*/

int main(void)
{
	int i = 1;
	int digits = (96);
	/*prints letters before 'e'*/
	while (digits < 122)
	{
		digits = digits + i;
		if (digits == 101 || digits == 113)
			continue;
		putchar(digits);
	}
	putchar(10);
	return (0);

}
